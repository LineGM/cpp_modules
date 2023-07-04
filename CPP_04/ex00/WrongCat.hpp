/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:08:44 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:18:00 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat(void);
		WrongCat(WrongCat const &toCopy);
		~WrongCat(void);
		WrongCat &operator = (WrongCat const &toCopy);

		void makeSound(void) const;
};

#endif