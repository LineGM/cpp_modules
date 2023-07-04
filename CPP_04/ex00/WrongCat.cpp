/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:08:41 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:20:04 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->m_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &toCopy)
{
	this->m_type = toCopy.getType();
}

WrongCat &WrongCat::operator = (WrongCat const &toCopy)
{
	this->m_type = toCopy.getType();
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: meow meow" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}