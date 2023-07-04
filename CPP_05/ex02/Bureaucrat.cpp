/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:37:15 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:40:37 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name), m_grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->m_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const std::string &Bureaucrat::getName() const
{
	return (this->m_name);
}

int Bureaucrat::getGrade() const
{
	return (this->m_grade);
}

void Bureaucrat::gradeUp()
{
	if (this->getGrade() <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->m_grade--;;
}

void Bureaucrat::gradeDown()
{
	if (this->getGrade() >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->m_grade++;
}

Bureaucrat::Bureaucrat(Bureaucrat const &toCopy)
{
	this->m_name = toCopy.getName();
	this->m_grade = toCopy.getGrade();
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &toCopy)
{
	this->m_name = toCopy.getName();
	this->m_grade = toCopy.getGrade();
	return *this;
}

void Bureaucrat::signForm(const bool isSigned, const std::string formName)
{
	if (isSigned)
	{
		std::cout << "Bureaucrat " << this->getName() << " signed Form ";
		std::cout << formName << std::endl;
	}
	else
	{
		std::cout << "Bureaucrat " << this->getName() << " could not sign Form ";
		std::cout << formName << " because he doesn't have enough grade!" << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Could not execute form" << std::endl;
	}
}

Bureaucrat::~Bureaucrat(void) {}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &toCopy)
{
	out << toCopy.getName();
	out << ", bureaucrat grade ";
	out << toCopy.getGrade();
	return out;
}