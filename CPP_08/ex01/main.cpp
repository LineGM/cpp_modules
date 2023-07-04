/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:00:27 by ldurante          #+#    #+#             */
/*   Updated: 2022/11/09 16:00:21 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{		
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "-------------------------------" << std::endl;
		try
		{
			sp.addNumber(56);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
		std::cout << "-------------------------------" << std::endl;
	{
		Span sp2 = Span(1000);
		for (int i = 0; i < 1000; i++)
    		sp2.addNumber(i*2);
		
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
		std::cout << "-------------------------------" << std::endl;
	{
		Span sp3 = Span(100000);
		for (int i = 0; i < 100000; i++)
    		sp3.addNumber(i*3);
		
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
		std::cout << "-------------------------------" << std::endl;
	{
		Span sp4 = Span(5);
		try
		{
			std::cout << sp4.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-------------------------------" << std::endl;
		sp4.addNumber(42);
		try
		{
			std::cout << sp4.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
		std::cout << "-------------------------------" << std::endl;
	{
		Span sp5(100);
		std::vector<int>	v;

		v.push_back(25);
		v.push_back(5);
		v.push_back(12);
		v.push_back(90);
		v.push_back(-2);

		sp5.addRange(v.begin(), v.end());
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;

		std::cout << "-------------------------------" << std::endl;
		for (int i = 0; i < 120; i++)
    		v.push_back(i*4);
		try
		{
			sp5.addRange(v.begin(), v.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}	
	return (0);
}