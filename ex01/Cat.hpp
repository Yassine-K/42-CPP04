/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:51:18 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 07:47:51 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
	private:
		Brain* mokhi;

	public:
		Cat();
		Cat(const Cat &);
		Cat &operator = (const Cat &);
		~Cat();
		void makeSound() const;
};