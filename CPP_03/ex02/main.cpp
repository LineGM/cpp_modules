/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:27:53 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/04 16:48:32 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "-----ClapTrap-tests-----" << std::endl;
	{
		ClapTrap alex("Alex");
		alex.attack("Bear");
		alex.takeDamage(6);
		alex.beRepaired(4);
		alex.takeDamage(3);
		alex.beRepaired(8);
		alex.takeDamage(17);
	}
	
	std::cout << "-----ScavTrap-tests-----" << std::endl;
	{
		ScavTrap slava("Slava");
		slava.attack("Ivan");
		slava.takeDamage(6);
		slava.beRepaired(4);
		slava.takeDamage(3);
		slava.guardGate();
		slava.beRepaired(8);
		slava.takeDamage(17);
	}

	std::cout << "-----FragTrap-tests-----" << std::endl;
	{
		FragTrap bob("Bob");
		bob.attack("Matvey");
		bob.takeDamage(6);
		bob.beRepaired(4);
		bob.takeDamage(3);
		bob.highFivesGuys();
		bob.beRepaired(8);
		bob.takeDamage(17);
	}
	return (0);
}