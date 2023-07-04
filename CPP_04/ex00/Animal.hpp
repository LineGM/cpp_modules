/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:08:12 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:29:55 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

/* Virtual - it will check if the method 
exists in any of de derivative classes and execute it */
/* A class is considered Abstract 
if it has at least 1 virtual function */

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
		virtual void makeSound(void) const;
};

#endif
