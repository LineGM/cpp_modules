/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:35:56 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/04 17:18:00 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fixedPoint()
{
}

Fixed::Fixed(const Fixed &toCopy)
{
	*this = toCopy;
}

Fixed &Fixed::operator = (Fixed const &toCopy)
{
	this->m_fixedPoint = toCopy.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->m_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->m_fixedPoint = raw;
}

Fixed::Fixed(int const value)
{
	this->m_fixedPoint = value << this->m_bits;
}

Fixed::Fixed(float const value)
{
	this->m_fixedPoint = roundf(value * (1 << this->m_bits));
}

float Fixed::toFloat(void) const
{
	return ((double)this->m_fixedPoint / (double)(1 << this->m_bits));
}

int Fixed::toInt(void) const
{
	return (this->m_fixedPoint >> this->m_bits);
}

bool Fixed::operator > (Fixed const &compare) const
{
	if (this->m_fixedPoint > compare.m_fixedPoint)
		return true;
	return false;
}
bool Fixed::operator < (Fixed const &compare) const
{
	if (this->m_fixedPoint < compare.m_fixedPoint)
		return true;
	return false;
}
bool Fixed::operator >= (Fixed const &compare) const
{
	if (this->m_fixedPoint >= compare.m_fixedPoint)
		return true;
	return false;
}
bool Fixed::operator <= (Fixed const &compare) const
{
	if (this->m_fixedPoint <= compare.m_fixedPoint)
		return true;
	return false;
}
bool Fixed::operator == (Fixed const &compare) const
{
	if (this->m_fixedPoint == compare.m_fixedPoint)
		return true;
	return false;
}
bool Fixed::operator != (Fixed const &compare) const
{
	if (this->m_fixedPoint != compare.m_fixedPoint)
		return true;
	return false;
}

Fixed Fixed::operator + (Fixed const &operation)
{
	return (this->toFloat() + operation.toFloat());
}

Fixed Fixed::operator - (Fixed const &operation)
{
	return (this->toFloat() - operation.toFloat());
}

Fixed Fixed::operator * (Fixed const &operation)
{
	return (this->toFloat() * operation.toFloat());
}

Fixed Fixed::operator / (Fixed const &operation)
{
	return (this->toFloat() / operation.toFloat());
}

/* Overload prefix */

Fixed& Fixed::operator ++ (void)
{
	this->m_fixedPoint++;
	return (*this);
}

Fixed& Fixed::operator -- (void)
{
	this->m_fixedPoint--;
	return (*this);
}

/* Overload postfix */

Fixed Fixed::operator ++ (int)
{
	Fixed tmp(*this);

	this->operator++();
	return (tmp);
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);

	this->operator--();
	return (tmp);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed::~Fixed()
{
}

std::ostream &operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}