/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:38:15 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:54:12 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), m_target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &toCopy) : Form("RobotomyRequestForm", 72, 45)
{
	this->m_target = toCopy.getTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const &toCopy)
{
	this->m_target = toCopy.getTarget();
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

	if (!this->isSigned())
		throw Form::ExecuteException();
	else if (executor.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "*Drilling noises*" << std::endl;
		srand(time(NULL));
		if (rand() % 2)
		{
			std::cout << this->getTarget() << " has been Robotomized succesfully!" << std::endl;
		}
		else
			std::cout << this->getTarget() << " was not Robotomized!" << std::endl;

	}
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return (this->m_target);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}