/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:08:22 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:15:43 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->m_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &toCopy)
{
	this->m_type = toCopy.getType();
}

Dog &Dog::operator = (Dog const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog: bark bark" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}