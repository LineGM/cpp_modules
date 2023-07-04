/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:25:59 by lhanna            #+#    #+#             */
/*   Updated: 2022/10/31 18:34:04 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	int			numberContacts;
	PhoneBook	phoneBook;
	std::string input;

	numberContacts = 0;
	while (input.compare("EXIT"))
	{
		std::cout << "Choose an option (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			std::cout << std::endl;
			std::cout << "----- Add contact -----" << std::endl;
			phoneBook.addContact(numberContacts);
			std::cout << "----- Contact added -----" << std::endl << std::endl;
			numberContacts++;
			if (numberContacts == 8)
				numberContacts = 0;
		}
		else if (!input.compare("SEARCH"))
		{
			std::cout << std::endl;
			phoneBook.searchContact();
		}
	}
	return (0);
}