/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:14:27 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/07 17:19:22 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T	*m_array;
		int	m_size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &toCopy);
		~Array(void);
		
		Array &operator = (Array const &toCopy);
		T &operator [] (const int &i) const;

		int size(void) const;

		class IndexOutOfBounds : public std::exception
		{
			public:
				const char* what() const throw();
		};

};

template <typename T>
Array<T>::Array(void) : m_array(new T[0]), m_size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : m_size(n)
{
	if (this->m_size < 0)
		throw IndexOutOfBounds();
	this->m_array = new T[n];
}

template <typename T>
Array<T>::Array(Array const &toCopy)
{
	if (this->m_array != NULL)
		delete [] this->m_array;
	if (toCopy.size() != 0)
	{
		this->m_size = toCopy.size();
		this->m_array = new T[this->m_size];
		for (int i = 0; i < this->m_size; i++)
			this->m_array[i] = toCopy[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator = (Array const &toCopy)
{
	if (this->m_array != NULL)
		delete [] this->m_array;
	if (toCopy.size() != 0)
	{
		this->m_size = toCopy.size();
		this->m_array = new T[this->m_size];
		for (int i = 0; i < this->m_size; i++)
			this->m_array[i] = toCopy[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator [] (const int &i) const
{
	if (i < 0 || i >= this->m_size)
		throw IndexOutOfBounds();
	return (this->m_array[i]);	
}

template <typename T>
int Array<T>::size(void) const
{
	return (this->m_size);
}

template <typename T>
const char *Array<T>::IndexOutOfBounds::what() const throw()
{
	return ("Index out of bounds!");
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->m_array != NULL)
		delete [] this->m_array;
}

#endif