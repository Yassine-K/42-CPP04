/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:12:39 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 15:43:21 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "A Cat spawned!" << std::endl;
}

Cat::Cat(const Cat &spawn) {
	type = spawn.type;
	std::cout << "A Cat cloned!" << std::endl;
}

Cat &Cat::operator=(const Cat &spawn) {
	if (this != &spawn) {
		type = spawn.type;
	}
	std::cout << "A Cat op cloned!" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat dispawned!" << std::endl;
}

void Cat::makeSound() {
	std::cout << "Tha Cat is meowing!" << std::endl;
}