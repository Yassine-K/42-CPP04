/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:07:02 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/05 09:35:53 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "A Dog spawned!" << std::endl;
	mokhi = new Brain();
}

Dog::Dog(const Dog &spawn) {
	type = spawn.type;
	*mokhi = *spawn.mokhi;
	std::cout << "A Dog cloned!" << std::endl;
}

Dog &Dog::operator=(const Dog &spawn) {
	if (this != &spawn) {
		type = spawn.type;
		*mokhi = *spawn.mokhi;
	}
	std::cout << "A Dog op cloned!" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete mokhi;
	std::cout << "Dog dispawned!" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Tha Dog is barking!" << std::endl;
}