/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:57:01 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/01 20:20:58 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

void HumanB::setName(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
}

void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << weapon->getType()  << std::endl;
	else
		std::cout << this->name << " has no weapon" << std::endl;
}

HumanB::~HumanB(void) {}