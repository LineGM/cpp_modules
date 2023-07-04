/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:37:59 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:49:29 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), m_target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &toCopy) : Form("PresidentialPardonForm", 25, 5)
{
	this->m_target = toCopy.getTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const &toCopy)
{
	this->m_target = toCopy.getTarget();
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw Form::ExecuteException();
	else if (executor.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return (this->m_target);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}