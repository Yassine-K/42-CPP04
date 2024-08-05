/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:04:53 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/05 08:30:54 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		notes[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++) {
		notes[i] = copy.notes[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	if (this != &copy) {
		for (int i = 0; i < 4; i++) {
			if (notes[i])
				delete notes[i];
			notes[i] = copy.notes[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (notes[i]){
			delete notes[i];}
	}
}

void MateriaSource::learnMateria(AMateria* item) {
	for (int i = 0; i < 4; i++) {
		if (item && !notes[i]) {
			notes[i] = item->clone();
			delete item;
			item = NULL;
			return;
		}
	}
	std::cout << "No space left to learn!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (notes[i] && notes[i]->getType() == type)
			return notes[i]->clone();
	}
	std::cout << "Item not found!" << std::endl;
	return NULL;
}
