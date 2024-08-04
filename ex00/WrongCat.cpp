/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 07:34:21 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 07:35:01 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "A WrongCat spawned!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &spawn) {
	type = spawn.type;
	std::cout << "A WrongCat cloned!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &spawn) {
	if (this != &spawn) {
		type = spawn.type;
	}
	std::cout << "A WrongCat op cloned!" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat dispawned!" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "Tha WrongCat is meowing!" << std::endl;
}