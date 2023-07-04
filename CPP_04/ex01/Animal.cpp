/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:08:07 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:54:16 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : m_type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &toCopy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->m_type = toCopy.getType();
}

Animal &Animal::operator = (Animal const &toCopy)
{
	std::cout << "Animal assignment operator overload called" << std::endl;
	this->m_type = toCopy.getType();
	return *this;
}

const std::string &Animal::getType(void) const
{
	return (this->m_type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animals can make sound..." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}