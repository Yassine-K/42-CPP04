/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:49:42 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 15:29:12 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* zoo[10];
	for (int i = 0; i < 10; i++) {
		if (i%2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}
	for (int i = 0; i < 10; i++) {
		delete zoo[i];
	}
	
	Cat *cat = new Cat();
	Cat *cat2 = new Cat();

	*cat = *cat2;
	
	delete cat;
	delete cat2;

	// Animal *mew = new Animal();

	return 0;
}