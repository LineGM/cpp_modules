/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:51:30 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:14:11 by lhanna           ###   ########.fr       */
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
		this->m_grade--;
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

void Bureaucrat::signForm(const bool isSigned, const std::string form)
{
	if (isSigned)
	{
		std::cout << "Bureaucrat " << this->getName() << " signed Form ";
		std::cout << form << std::endl;
	}
	else
	{
		std::cout << "Bureaucrat " << this->getName() << " could not sign Form ";
		std::cout << form << " because he doesn't have enough grade!" << std::endl;
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