/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:51:23 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:07:50 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	private:
		std::string	m_name;
		int			m_grade;
		Bureaucrat(void);

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &toCopy);
		~Bureaucrat(void);
		Bureaucrat &operator = (Bureaucrat const &toCopy);

		const std::string &getName() const;
		int getGrade() const;
		void gradeUp();
		void gradeDown();
		void signForm(const bool isSigned, const std::string form);

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

};

std::ostream    &operator<<(std::ostream &out, Bureaucrat const &toCopy);

#endif