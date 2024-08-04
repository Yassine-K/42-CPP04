/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 07:41:58 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 15:23:45 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain {
	protected:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &);
		Brain &operator = (const Brain &);
		~Brain();
};