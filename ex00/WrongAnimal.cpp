/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 07:34:16 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 07:36:17 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "New WrongAnimal spawned!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &spawn) {
	type = spawn.type;
	std::cout << "New WrongAnimal cloned!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &spawn) {
	if (this != &spawn) {
		type = spawn.type;
	}
	std::cout << "New WrongAnimal op cloned!" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal dispawned!" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "Strange WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}