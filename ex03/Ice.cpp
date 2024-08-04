/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:20:24 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 12:51:00 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	materiaType = "ice";
}

Ice::Ice(const Ice & copy) {
	materiaType = copy.materiaType;
}

Ice &Ice::operator = (const Ice & copy) {
	if (this != &copy)
		materiaType = copy.materiaType;
	return *this;
}

Ice::~Ice() {
	
}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
