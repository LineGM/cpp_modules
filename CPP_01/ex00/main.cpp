/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:57:01 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/01 21:18:39 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie Slava("Slava");
	Slava.announce();
	
	Zombie *Alex = newZombie("Alex");
	Alex->announce();

	delete Alex;

	randomChump("John");
	return (0);
}