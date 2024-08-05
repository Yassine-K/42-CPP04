/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:13:35 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/05 08:34:47 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {
	name = "AAA";
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
		unused[i] = NULL;
	}
}

Character::Character(std::string n) {
	name = n;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
		unused[i] = NULL;
	}
}

Character::Character(const Character &copy) {
	name = copy.name;
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
		inventory[i] = copy.inventory[i]->clone();
	}
}

Character &Character::operator = (const Character &copy) {
	if (this != &copy) {
		name = copy.name;
		for (int i = 0; i < 4; i++) {
			if (inventory[i])
				delete inventory[i];
			inventory[i] = copy.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
		if (unused[i])
			delete unused[i];
	}
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (unused[i])
			delete unused[i];
		unused[i] = NULL;
	}
	for (int i = 0; m && i < 4 ; i++) {
		if (!inventory[i]) {
			inventory[i] = m->clone();
			delete m;
			return;
		}
	}
	delete m;
	std::cout << "Full inventory!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 4 && idx > -1 && inventory[idx]){
		unused[idx] = inventory[idx];
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 4 && idx > -1 && inventory[idx])
		inventory[idx]->use(target);
}