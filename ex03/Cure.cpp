/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:20:22 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 11:39:25 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
	materiaType = "cure";
}

Cure::Cure(const Cure & copy) {
	materiaType = copy.materiaType;
}

Cure &Cure::operator = (const Cure & copy) {
	if (this != &copy)
		materiaType = copy.materiaType;
	return *this;
}

Cure::~Cure() {
	
}

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}