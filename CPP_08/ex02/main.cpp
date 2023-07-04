/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:31:27 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/08 16:45:27 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int>			mstack;
	std::list<int>				list;

	mstack.push(5);
	mstack.push(17);
	list.push_back(5);
	list.push_back(17);
	
	std::cout << "MutantStack: " << mstack.top() << std::endl;
	std::cout << "List: " << list.back() << std::endl;
	std::cout << "-------------------------------" << std::endl;
	
	mstack.pop();
	list.pop_back();

	std::cout << "MutantStack size: " << mstack.size() << std::endl;
	std::cout << "List size: " << list.size() << std::endl;
	std::cout << "-------------------------------" << std::endl;

	mstack.push(3);
	mstack.push(9);
	mstack.push(737);
	mstack.push(0);
	list.push_back(3);
	list.push_back(9);
	list.push_back(737);
	list.push_back(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();
	std::list<int>::iterator	listIt = list.begin();
	std::list<int>::iterator	listIte = list.end();

	++it;
	--it;

	std::cout << "MutantStack elements: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it; 
	}
	std::cout << "-------------------------------" << std::endl;

	std::cout << "List elements: " << std::endl;
	while (listIt != listIte)
	{
		std::cout << *listIt << std::endl;
		++listIt; 
	}
	std::cout << "-------------------------------" << std::endl;
	
	std::stack<int> s(mstack);
	std::cout << "Top is " << s.top() << ", and size is " << s.size() << std::endl;
	std::cout << "-------------------------------" << std::endl;

	MutantStack<int>	msEmpty;
	std::list<int>		lsEmpty;

	std::cout << "MutantStack is empty: " << msEmpty.empty() << std::endl;
	std::cout << "List is empty: " << lsEmpty.empty() << std::endl;
	std::cout << "-------------------------------" << std::endl;

	MutantStack<std::string>	str1;
	MutantStack<std::string>	str2;

	str1.push("str");
	str1.push("strstr");

	std::cout << "size of str2: " << str2.size() << std::endl;
	str2 = str1;
	std::cout << "size of str2: " << str2.size() << std::endl;

	return (0);
}