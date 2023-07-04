/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:36:17 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:37:22 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &toCopy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = toCopy.getIdea(i);
}

Brain &Brain::operator = (Brain const &toCopy)
{
	std::cout << "Brain assignment operator overload called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = toCopy.getIdea(i);
	return *this;
}

const std::string &Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

void Brain::setIdea(std::string idea, int i)
{
	this->ideas[i] = idea;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}