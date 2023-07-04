/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:11:07 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 15:15:47 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

/* A class is considered Abstract 
if it has at least 1 virtual function */
/* Pure virtual method (declare method = 0) will never
execute the method in base class but will make sure
the derivative classes have it. */

class Animal
{
	protected:
		std::string m_type;

	public:
		Animal(void);
		Animal(Animal const &toCopy);
		virtual ~Animal(void);
		Animal &operator = (Animal const &toCopy);

		const std::string &getType(void) const;
		virtual void makeSound(void) const = 0;
		virtual Brain *getBrain(void) const = 0;
};

#endif