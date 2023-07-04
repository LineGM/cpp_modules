/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:57:01 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/01 20:20:58 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::setName(std::string name)
{
	this->m_name = name;
}

std::string Zombie::getName(void)
{
	return (this->m_name);
}

void Zombie::announce()
{
	std::cout << this->m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->m_name << " was destroyed" << std::endl;
}