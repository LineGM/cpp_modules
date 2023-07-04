/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:38:36 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/07 14:40:44 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

struct Data
{
	std::string s;
	int			x;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif