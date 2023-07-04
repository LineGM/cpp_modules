/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:45:08 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 15:00:26 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain* m_brain;

	public:
		Dog(void);
		Dog(Dog const &toCopy);
		~Dog(void);
		Dog &operator = (Dog const &toCopy);
		
		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif