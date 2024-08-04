/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:46:26 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 15:26:36 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal {
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		virtual ~Animal();
		virtual void makeSound() const = 0;
		std::string getType() const;
};