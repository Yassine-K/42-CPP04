/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:12:39 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/03 15:14:21 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "New Cat spawned!" << std::endl;
}

Cat::Cat(const Cat &spawn) {
	type = spawn.type;
	std::cout << "New Cat cloned!" << std::endl;
}

Cat &Cat::operator=(const Cat &spawn) {
	if (this != &spawn) {
		type = spawn.type;
	}
	std::cout << "New Cat op cloned!" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat dispawned!" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Tha Cat is meowing!" << std::endl;
}