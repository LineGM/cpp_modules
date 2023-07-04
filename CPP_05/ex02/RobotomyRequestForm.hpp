/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:38:22 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/06 15:55:08 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string m_target;
		RobotomyRequestForm(void);

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &toCopy);
		~RobotomyRequestForm(void);
		RobotomyRequestForm &operator = (RobotomyRequestForm const &toCopy);

		const std::string &getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif