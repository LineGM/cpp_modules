/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:42:06 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 14:59:26 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain* m_brain;

	public:
		Cat(void);
		Cat(Cat const &toCopy);
		~Cat(void);
		Cat &operator = (Cat const &toCopy);

		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif