/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:28:19 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/07 16:02:45 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	srand(time(NULL));
	int		random;
	Base	*generate;

	random = rand() % 3;
    if (random == 0)
        generate = new A();
    else if (random == 1)
        generate = new B();
    else
        generate = new C();
	return (generate);
}

void identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "Pointer is A class" << std::endl;
	if (b)
		std::cout << "Pointer is B class" << std::endl;
	if (c)
		std::cout << "Pointer is C class" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Reference is A class" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Reference is B class" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}

	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Reference is C class" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
}