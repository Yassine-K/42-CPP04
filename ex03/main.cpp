/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:49:17 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/05 08:45:03 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <algorithm>

void intra() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

void leakers() {
	intra();
	
	std:: cout << "\n**********************************\n" << std::endl;
	
	ICharacter* ana = new Character("ana");
	IMateriaSource* book = new MateriaSource();
	book->learnMateria(new Ice());
	book->learnMateria(new Cure());
	AMateria* matt = book->createMateria("cure");
	ana->equip(matt);
	ICharacter* hhh = new Character("has");
	ana->use(0, *hhh);
	matt = book->createMateria("ice");
	ana->equip(matt);
	matt = book->createMateria("ice");
	ana->equip(matt);
	matt = book->createMateria("ice");
	ana->equip(matt);
	matt = book->createMateria("ice");
	ana->equip(matt);
	ana->unequip(0);
	ana->unequip(1);
	ana->unequip(2);
	ana->unequip(3);
	matt = book->createMateria("ice");
	ana->equip(matt);
	matt = book->createMateria("ice");
	ana->equip(matt);
	matt = book->createMateria("ice");
	ana->equip(matt);
	matt = book->createMateria("ice");
	ana->equip(matt);
	ana->unequip(0);
	ana->unequip(1);
	ana->unequip(2);
	ana->unequip(3);
	delete ana;
	delete book;
	delete hhh;
}

int main()
{
	leakers();
	// while(true){}
	return 0;
}