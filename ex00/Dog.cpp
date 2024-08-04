/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:07:02 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 07:33:01 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "A Dog spawned!" << std::endl;
}

Dog::Dog(const Dog &spawn) {
	type = spawn.type;
	std::cout << "A Dog cloned!" << std::endl;
}

Dog &Dog::operator=(const Dog &spawn) {
	if (this != &spawn) {
		type = spawn.type;
	}
	std::cout << "A Dog op cloned!" << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog dispawned!" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Tha Dog is barking!" << std::endl;
}