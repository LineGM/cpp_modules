/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:57:01 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/01 20:20:58 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int numberZombies;

	numberZombies = 5;
	Zombie *Horde = zombieHorde(numberZombies, "Ryo");
	Horde[2].setName("Jack");
	for (int i = 0; i < numberZombies; i++)
		Horde[i].announce();
	delete[] Horde;
	return (0);
}