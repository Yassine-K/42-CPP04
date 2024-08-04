/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:46:26 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 15:00:18 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
};