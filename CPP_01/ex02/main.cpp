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

#include <iostream>
#include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "string address: " << &string << std::endl;
	std::cout << "stringPTR address: " << &(*stringPTR) << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;

    std::cout << "string: " << string << std::endl;
	std::cout << "string using pointer: " << *stringPTR << std::endl;
	std::cout << "string using reference: " << stringREF << std::endl;
	return (0);
}