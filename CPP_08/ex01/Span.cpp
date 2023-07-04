/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:34:30 by ldurante          #+#    #+#             */
/*   Updated: 2022/11/09 15:51:39 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : m_size(N) {}

Span::Span(Span const &toCopy)
{
	this->m_vector = toCopy.getVector();
	this->m_size = toCopy.getSize();
}

Span &Span::operator = (Span const &toCopy)
{
	this->m_vector = toCopy.getVector();
	this->m_size = toCopy.getSize();
	return *this;
}

unsigned int Span::getSize(void) const
{
	return (this->m_size);
}

std::vector<int> Span::getVector(void) const
{
	return (this->m_vector);
}

void Span::addNumber(int n)
{
	if (m_vector.size() >= m_size)
		throw SpanFullException();
	m_vector.push_back(n);
}

int Span::shortestSpan(void)
{
	int min;
	int minIndex;
	int secondMin;

	if (m_size <= 1 || m_vector.size() <= 1)
		throw NoSpanException();

	std::sort(m_vector.begin(), m_vector.end());
	int shortest_span = m_vector[1] - m_vector[0];

	for (size_t i = 0; i < m_vector.size() - 1; i++)
		shortest_span = std::min(m_vector[i+1] - m_vector[i], shortest_span);
	return (shortest_span);
}

int Span::longestSpan(void)
{
	if (m_size <= 1 || m_vector.size() <= 1)
		throw NoSpanException();
	
	std::sort(m_vector.begin(), m_vector.end());
	return (m_vector.back() - m_vector[0]);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	unsigned int		spaceLeft;
	std::vector<int>	tmp(begin, end);

	spaceLeft = m_size - (int)m_vector.size();
	if (tmp.size() > spaceLeft)
		throw NotEnoughSpaceException();
	for (std::vector<int>::iterator i = begin; i < end; i++)
		addNumber(*i);
}

const char *Span::SpanFullException::what() const throw()
{
	return ("Error: can't add more numbers!");
}

const char *Span::NoSpanException::what() const throw()
{
	return ("Error: not enough numbers!");
}

const char *Span::NotEnoughSpaceException::what() const throw()
{
	return ("Error: not enough space for the range!");
}

Span::~Span(void) {}