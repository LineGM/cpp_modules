/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:19:47 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/08 15:22:08 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// Многие структуры и алгоритмы данных выглядят одинаково
// независимо от типа, на который они работают. 
// Шаблоны позволяют определять операции класса или функции
// и позволяют пользователю указать конкретные типы, с помощью которых должны работать эти операции.
// Шаблон — это конструкция, которая создает обычный тип или функцию во время компиляции
// на основе аргументов, которые пользователь предоставляет для параметров шаблона. 

int main( void ) 
{
	int a = 2;
	int b = 3;
	
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}