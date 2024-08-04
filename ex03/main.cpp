/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:49:17 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 15:52:12 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void leakers() {

IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
me->unequip(0);
me->unequip(0);
me->unequip(0);
me->unequip(0);
me->unequip(0);
me->unequip(9);
me->unequip(2);
me->unequip(3);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
	

ICharacter* ana = new Character("ana");

IMateriaSource* book = new MateriaSource();
book->learnMateria(new Ice());
book->learnMateria(new Cure());
// (void) ana;
// (void) matt;
AMateria* matt = book->createMateria("cure");
ana->equip(matt);
// matt = book->createMateria("ice");
// ana->equip(matt);
// matt = book->createMateria("ice");
// ana->equip(matt);
// matt = book->createMateria("ice");
// ana->equip(matt);
// matt = book->createMateria("ice");
// ana->equip(matt);


// delete ana;
// delete matt;
// delete book;




	
}

int main()
{
	leakers();
	// while(true){}
	return 0;
}