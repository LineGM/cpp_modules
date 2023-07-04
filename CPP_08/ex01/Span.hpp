/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:59:32 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/08 16:26:14 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

class Span
{
	private:
		std::vector<int> m_vector;
		unsigned int m_size;
		Span(void);

	public:
		Span(unsigned int N);
		Span(Span const &toCopy);
		~Span(void);
		Span &operator = (Span const &toCopy);

		std::vector<int> getVector(void) const;
		unsigned int getSize(void) const;
		void addNumber(int n);
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);

		class SpanFullException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class NoSpanException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class NotEnoughSpaceException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
};

#endif