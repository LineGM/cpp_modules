/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:08:14 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:13:52 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->m_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &toCopy)
{
	this->m_type = toCopy.getType();
}

Cat &Cat::operator = (Cat const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: meow meow" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}