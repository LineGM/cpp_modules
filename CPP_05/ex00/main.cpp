/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:25:55 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 14:46:28 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	/* Grade too high exception */
	{
		try
		{
			Bureaucrat slava("Slava", 0);
			std::cout << slava << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "---------------------" << std::endl;

	/* Grade too low exception */
	{
		try
		{
			Bureaucrat alex("Alex", 151);
			std::cout << alex << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "---------------------" << std::endl;
	
	/* gradeUp exeception */
	{	
		try 
		{
			Bureaucrat sam("Sam", 1);
			std::cout << sam << std::endl;
			sam.gradeUp();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "---------------------" << std::endl;

	/* gradeDown exeception */
	{	
		try 
		{
			Bureaucrat misha("Misha", 150);
			std::cout << misha << std::endl;
			misha.gradeDown();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}