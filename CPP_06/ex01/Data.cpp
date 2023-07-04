/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:38:41 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/07 14:39:19 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t casted;

	casted = reinterpret_cast<uintptr_t>(ptr);
	return (casted);
}

Data *deserialize(uintptr_t raw)
{
	Data *casted;

	casted = reinterpret_cast<Data*>(raw);
	return (casted);
}