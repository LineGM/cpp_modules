/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:39:58 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/07 17:45:03 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/* reinterpret_cast<type> (expr):
reinterpret_cast converts any pointer type to any other pointer type, even of unrelated classes.
The operation result is a simple binary copy of the value from one pointer to the other.
All pointer conversions are allowed: neither the content pointed nor the pointer type itself is checked. */

int main(void)
{
	Data data;
	Data *recastedData;
	uintptr_t raw;

	data.s = "Data!";
	data.x = 10;
	std::cout << "BEFORE SERIALIZE: " << std::endl;
	std::cout << "Memory address: " << &data << std::endl;
	std::cout << "String: " << data.s << std::endl;
	std::cout << "Int: " << data.x << std::endl;

	raw = serialize(&data);

	std::cout << "-------------------" << std::endl;
	std::cout << "AFTER SERIALIZE: " << std::endl;
	std::cout << "Raw: " << raw << std::endl;

	recastedData = deserialize(raw);

	std::cout << "-------------------" << std::endl;
	std::cout << "AFTER DESERIALIZE:" << std::endl;
	std::cout << "Memory address: " << recastedData << std::endl;
	std::cout << "String: " << recastedData->s << std::endl;
	std::cout << "Int: " << recastedData->x << std::endl;
	
	return (0);
}