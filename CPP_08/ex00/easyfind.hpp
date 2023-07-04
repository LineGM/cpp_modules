/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:36:13 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/09 15:25:15 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

// Итераторы обеспечивают доступ к элементам контейнера. 
// С помощью итераторов очень удобно перебирать элементы. И
// тератор описывается типом iterator. 
// Но для каждого контейнера конкретный тип итератора будет отличаться.

template <typename T>
typename T::iterator easyfind(T &container, const int toFind)
{
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), toFind);
	if (iter == container.end())
		throw(std::runtime_error("Element hasn't been found!"));
	return (iter);
}

#endif