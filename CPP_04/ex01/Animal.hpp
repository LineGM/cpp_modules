/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:41:20 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 15:22:34 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

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
		virtual Brain *getBrain(void) const = 0;
};

#endif