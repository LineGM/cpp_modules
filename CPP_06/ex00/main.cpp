/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:07:25 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/07 14:28:42 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/* static_cast<type> (expr): 
Converts between types using a combination of implicit and user-defined conversions. */

void convert(const char *input)
{
	Conversion myConversion(input);

	myConversion.printChar();
	myConversion.printInt();
	myConversion.printFloat();
	myConversion.printDouble();
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: wrong arguments!" << std::endl;
		return (1);
	}
	else
		convert(argv[1]);
	return (0);
}