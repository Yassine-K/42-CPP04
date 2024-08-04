/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:05:36 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 11:40:07 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	materiaType = "";
}

AMateria::AMateria(const AMateria & tmp){
	materiaType = tmp.materiaType;
}

AMateria &AMateria::operator = (const AMateria & tmp){
	if (this != &tmp)
		materiaType = tmp.materiaType;
	return *this;
}

AMateria::~AMateria() {
	
}

AMateria::AMateria(std::string const & type) {
	materiaType = type;
}

std::string const & AMateria::getType() const {
	return materiaType;
}

void AMateria::use(ICharacter& target) {
	std::cout << "* AMateria use function called for " << target.getName() << " *" << std::endl;
}