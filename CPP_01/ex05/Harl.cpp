/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:57:01 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/01 20:20:58 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

void Harl::debug(void)
{
	std::cout << "DEBUG: I love to get extra bacon for my"
		"7XL-double-cheese-triple-pickle burger. I just love it!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon cost more money."
		"You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free."
		"I've been coming here for years and you just started working here last month" << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable, I want to speak to the manager now..." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*functionsPointer[4])(void);

	functionsPointer[0] = &Harl::debug;
	functionsPointer[1] = &Harl::info;
	functionsPointer[2] = &Harl::warning;
	functionsPointer[3] = &Harl::error;

	std::string complaints[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (level == complaints[i])
			return (this->*functionsPointer[i])();
 	}
	std::cout << "SCREAMS TO THE MANAGER FOR NO REASON" << std::endl;
}

Harl::~Harl() {}