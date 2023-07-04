/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:25:59 by lhanna            #+#    #+#             */
/*   Updated: 2022/10/31 18:34:04 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(int numberContact)
{
	contactList[numberContact].Add();
}

void PhoneBook::searchContact()
{
	int			selectedContact;
	Table		table;
	std::string	in;
	table.printTable(contactList);
	std::cout << "Select a contact from the list: ";
	std::getline(std::cin, in);
	std::stringstream(in) >> selectedContact;
	table.printContact(contactList, selectedContact);
}