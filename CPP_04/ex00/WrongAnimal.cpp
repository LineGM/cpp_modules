/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:08:35 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:44:39 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : m_type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &toCopy)
{
	this->m_type = toCopy.getType();
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

const std::string &WrongAnimal::getType(void) const
{
	return (this->m_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimals can make sound..." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}