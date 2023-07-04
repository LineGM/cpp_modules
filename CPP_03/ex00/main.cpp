/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:27:57 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/04 16:32:46 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap alex("Alex");

	alex.attack("Bear");
	alex.takeDamage(6);
	alex.beRepaired(4);
	alex.takeDamage(3);
	alex.beRepaired(8);
	alex.takeDamage(17);
	return (0);
}