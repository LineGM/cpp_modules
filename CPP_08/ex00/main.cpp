/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:06 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/09 15:32:01 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(void)
{
	std::cout << "Container VECTOR:" << std::endl;
	std::vector<int> v;

	for (int i = 0; i < 100; i++)
		v.push_back(i);
	
	try
	{
		std::cout << *easyfind(v, 3) << std::endl;
		std::cout << *easyfind(v, 101) << std::endl;
	}
	catch (std::runtime_error e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

    std::cout << "-----------------------" << std::endl;
	
	std::cout << "Container LIST:" << std::endl;
	std::list<int>	l;

	for (int i = 0; i < 100; i++)
		l.push_back(i);
	
	try
	{
		std::cout << *easyfind(l, 3) << std::endl;
		std::cout << *easyfind(l, 101) << std::endl;
	}
	catch (std::runtime_error e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return (0);
}