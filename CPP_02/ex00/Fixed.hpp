/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:35:56 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/04 17:13:28 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int m_fixedPoint;
		int static const m_bits = 8;
	
	public:
		Fixed();
		Fixed (const Fixed &toCopy);
		Fixed& operator = (Fixed const &toCopy);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif