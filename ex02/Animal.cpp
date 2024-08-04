/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:59:01 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 15:26:41 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "New Animal spawned!" << std::endl;
}

Animal::Animal(const Animal &spawn) {
	type = spawn.type;
	std::cout << "New Animal cloned!" << std::endl;
}

Animal &Animal::operator=(const Animal &spawn) {
	if (this != &spawn) {
		type = spawn.type;
	}
	std::cout << "New Animal op cloned!" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal dispawned!" << std::endl;
}

std::string Animal::getType() const {
	return type;
}