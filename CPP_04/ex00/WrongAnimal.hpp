/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:08:38 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:33:33 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

/* makeSound is not virtual, when called from a derived class
it executes from the base class */

class WrongAnimal
{
	protected:
		std::string m_type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &toCopy);
		virtual ~WrongAnimal(void);
		WrongAnimal &operator = (WrongAnimal const &toCopy);

		const std::string &getType(void) const;
		void makeSound(void) const;
};

#endif