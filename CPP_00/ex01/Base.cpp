/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:25:59 by lhanna            #+#    #+#             */
/*   Updated: 2022/10/31 18:34:04 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

std::string Table::truncateContact(std::string truncate)
{
	std::string tmp;

	if (truncate.size() > 10)
	{
		truncate[9] = '.';
		tmp = truncate.substr(0, 10);
		truncate = tmp;
	}
	return (truncate);
}

void Table::printTable(Contact contactList[8])
{
	std::cout << std::setw(11) << "Index|";
	std::cout << std::setw(11) << "Name|";
	std::cout << std::setw(11) << "Lastname|";
	std::cout << std::setw(11) << "Nickname|";
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncateContact(contactList[i].getName()) << "|";
		std::cout << std::setw(10) << truncateContact(contactList[i].getLastname()) << "|";
		std::cout << std::setw(10) << truncateContact(contactList[i].getNickname()) << "|";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Table::printContact(Contact contactList[8], int selectedContact)
{
	if (selectedContact > 0 && selectedContact < 9)
	{
		if (contactList[selectedContact -1].getName().empty())
			std::cout << "Contact data is empty" << std::endl;
		else
			contactList[selectedContact - 1].getInfo(selectedContact);
	}
	else
		std::cout << "Could not find contact" << std::endl;
}