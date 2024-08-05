/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:12:39 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/05 09:35:24 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "A Cat spawned!" << std::endl;
	mokhi = new Brain();
}

Cat::Cat(const Cat &spawn) {
	type = spawn.type;
	*mokhi = *spawn.mokhi;
	std::cout << "A Cat cloned!" << std::endl;
}

Cat &Cat::operator=(const Cat &spawn) {
	if (this != &spawn) {
		type = spawn.type;
		*mokhi = *spawn.mokhi;
	}
	std::cout << "A Cat op cloned!" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete mokhi;
	std::cout << "Cat dispawned!" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Tha Cat is meowing!" << std::endl;
}