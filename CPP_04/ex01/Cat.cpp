/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:41:44 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:58:01 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->m_type = "Cat";
	this->m_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &toCopy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->m_type = toCopy.getType();
	this->m_brain = new Brain();
	*(this->m_brain) = *(toCopy.getBrain());
}

Cat &Cat::operator = (Cat const &toCopy)
{
	std::cout << "Cat assignment operator overload called" << std::endl;
	this->m_type = toCopy.getType();
	*(this->m_brain) = *(toCopy.getBrain());
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat: meow meow" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->m_brain);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->m_brain;
}