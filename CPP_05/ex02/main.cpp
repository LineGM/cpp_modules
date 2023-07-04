/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:26:22 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:36:07 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm shrubbery("target1");
	RobotomyRequestForm robotomy("target2");
	PresidentialPardonForm pardon("target3");
	Bureaucrat slava("Slava", 150);
	Bureaucrat alex("Alex", 120);
	Bureaucrat steve("Steve", 3);
	
	/* Try to execute forms without being signed */
	{
		try
		{
			std::cout << slava << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			slava.executeForm(shrubbery); // Invalid 
			slava.executeForm(robotomy); // Invalid 
			slava.executeForm(pardon); // Invalid 
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------" << std::endl;
	{
		try
		{
			std::cout << slava << std::endl;
			std::cout << alex << std::endl;
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			shrubbery.beSigned(alex); // Valid
			slava.executeForm(shrubbery); // Invalid
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "---------------------" << std::endl;
	
	/* Valid test */
	{
		try
		{
			robotomy.beSigned(steve); // Valid
			pardon.beSigned(steve); // Valid
			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;
			
			std::cout << "---------------------" << std::endl;
			steve.executeForm(shrubbery); //Valid
			std::cout << "---------------------" << std::endl;
			steve.executeForm(robotomy); //Valid
			std::cout << "---------------------" << std::endl;
			steve.executeForm(pardon); //Valid
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "---------------------" << std::endl;
	
	return (0);
}