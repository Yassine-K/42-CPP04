/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:49:42 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 08:52:42 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return 0;
}