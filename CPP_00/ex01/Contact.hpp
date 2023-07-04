/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:25:59 by lhanna            #+#    #+#             */
/*   Updated: 2022/10/31 18:34:04 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <sstream>
#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
	std::string	name;
	std::string	lastName;
	std::string	nickName;
	std::string	phone;
	std::string	darkestSecret;

	public:
	void	getInfo(int index);
	void 	Add();

	std::string getName()
	{
		return name;
	}
	std::string getLastname()
	{
		return lastName;
	}
	std::string getNickname()
	{
		return nickName;
	}
};

#endif