/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:31:35 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/09 16:02:31 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <deque>
#include <list>
#include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack(void);
		MutantStack(MutantStack const &toCopy);
		~MutantStack(void);
		MutantStack &operator = (MutantStack const &toCopy);
		
		iterator begin(void) 
        { 
            return this->c.begin(); 
        };
		iterator end(void) 
        {
            return this->c.end(); 
        };
};

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &toCopy)
{
	this->c = toCopy.c;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator = (MutantStack const &toCopy)
{
	this->c = toCopy.c;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

#endif