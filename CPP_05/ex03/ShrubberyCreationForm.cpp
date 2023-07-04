/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:38:29 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:56:43 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), m_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &toCopy) : Form("ShrubberyCreationForm", 145, 137)
{
	this->m_target = toCopy.getTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &toCopy)
{
	this->m_target = toCopy.getTarget();
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw Form::ExecuteException();
	else if (executor.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::string fullName;
		fullName = this->m_target + "_shruberry";
		std::ofstream file(fullName);
		file << ASCII_TREE << ASCII_TREES << ASCII_TREE;
		std::cout << "Form " << this->getName() << "  was executed succesfully!" << std::endl;
		file.close();
	}
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (this->m_target);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}