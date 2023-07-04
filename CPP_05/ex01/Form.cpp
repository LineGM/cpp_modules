/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:51:15 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:46:34 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : m_name(""), m_gradeToSign(150), m_gradeToExecute(150), m_isSigned(false) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : m_name(name), m_gradeToSign(gradeToSign), m_gradeToExecute(gradeToExecute), m_isSigned(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &toCopy) : m_name(toCopy.getName()), m_gradeToSign(toCopy.getSignGrade()), m_gradeToExecute(toCopy.getExecuteGrade()), m_isSigned(toCopy.isSigned())
{
	this->m_isSigned = toCopy.isSigned();
}

Form &Form::operator = (Form const &toCopy)
{
	this->m_isSigned = toCopy.isSigned();
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

const std::string &Form::getName() const
{
	return (this->m_name);
}

int Form::getSignGrade() const
{
	return (this->m_gradeToSign);
}

int Form::getExecuteGrade() const
{
	return (this->m_gradeToExecute);
}

bool Form::isSigned() const
{
	return (this->m_isSigned);
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= Form::getSignGrade())
		this->m_isSigned = true;
	b.signForm(this->isSigned(), this->getName());
	if (b.getGrade() > Form::getSignGrade())
		throw Form::GradeTooLowException();
}

Form::~Form(void) {}

std::ostream &operator<<(std::ostream &out, Form const &toCopy)
{
	out << "Form " << toCopy.getName();
	out << " is grade " << toCopy.getSignGrade() << " and";
	if (toCopy.isSigned())
		out << " is signed";
	else
		out << " is not signed";
	return out;
}