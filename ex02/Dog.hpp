/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:53:23 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 07:47:55 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
	private:
		Brain* mokhi;

	public:
		Dog();
		Dog(const Dog &);
		Dog &operator = (const Dog &);
		~Dog();
		void makeSound() const;
};