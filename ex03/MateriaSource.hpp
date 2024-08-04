/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:47:06 by ykhayri           #+#    #+#             */
/*   Updated: 2024/08/04 11:26:25 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
		AMateria* notes[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &);
		MateriaSource &operator=(const MateriaSource &);
		virtual ~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};