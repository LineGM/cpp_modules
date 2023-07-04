/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:14:08 by ldurante          #+#    #+#             */
/*   Updated: 2022/11/06 16:09:36 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern	RandomIntern;
	Form 	*rrf;

	rrf = RandomIntern.makeForm("robotomy request", "Bender"); // Valid
	rrf = RandomIntern.makeForm("shrubbery request", "Shru"); // Valid
	rrf = RandomIntern.makeForm("pardon request", "Killme"); // Valid

	rrf = RandomIntern.makeForm("random request", "random"); // Valid

	return (0);
}