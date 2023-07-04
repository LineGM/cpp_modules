/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:11:26 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 15:11:27 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain(void);
		Brain(Brain const &toCopy);
		~Brain(void);
		Brain &operator = (Brain const &toCopy);

		const std::string &getIdea(int i) const;
		void setIdea(std::string idea, int i);
};

#endif