/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:13:59 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/04 16:21:59 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->m_hitPoints = 100;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy)
{
	*this = toCopy;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &toCopy)
{
	this->m_name = toCopy.getName();
	this->m_hitPoints = toCopy.getHitPoints();
	this->m_energyPoints = toCopy.getEnergyPoints();
	this->m_attackDamage = toCopy.getAttackDamage();
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    if (this->m_energyPoints <= 0 || this->m_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->m_name << " can't do anything!" << std::endl;
	}
	else
	{
		this->m_energyPoints -= 1;
		std::cout << "ScavTrap " << this->m_name << " attacks " << target;
		std::cout << " causing " << this->m_attackDamage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->m_name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}