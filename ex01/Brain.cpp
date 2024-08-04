/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 07:45:22 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 07:55:53 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

void fillArray(std::string myIdeas[100], const std::string yourIdeas[100]) {
	for (int i = 0; i < 100; i++)
		myIdeas[i] = yourIdeas[i];
}

Brain::Brain() {
	std::cout << "I have a brain too!" << std::endl;
}

Brain::Brain(const Brain &mokh) {
	for (int i = 0; i < 100; i++)
		fillArray(ideas, mokh.ideas);
	std::cout << "Copy my brain!" << std::endl;
}

Brain &Brain::operator = (const Brain &mokh){
	if(this != &mokh) {
		fillArray(ideas, mokh.ideas);
	}
	std::cout << "Copy my op brain!" << std::endl;
	return *this;
}

Brain::~Brain(){
	std::cout << "I'm brainless!" << std::endl;
}