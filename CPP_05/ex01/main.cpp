/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:50:58 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:16:24 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	/* Form grade too high */
	{
		try
		{
			Form form0("Form0", 0, 5);
			std::cout << form0 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}

	std::cout << "---------------------" << std::endl;

	/* Valid test */
	{
		try
		{
			Bureaucrat alex("Alex", 15);
			Form form1("Form1", 20, 45);
			std::cout << alex << std::endl;
			std::cout << form1 << std::endl;
			form1.beSigned(alex);
			std::cout << form1 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "---------------------" << std::endl;

	/* Bureaucrat grade is not enough */
	{
		try
		{
			Bureaucrat slava("Slava", 35);
			Form form2("Form2", 20, 45);
			std::cout << slava << std::endl;
			std::cout << form2 << std::endl;
			form2.beSigned(slava);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}