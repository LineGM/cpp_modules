/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:20:34 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/07 17:42:51 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/* dynamic_cast<type> (expr) − The dynamic_cast performs a runtime cast that
verifies the validity of the cast. If the cast cannot be made, the cast fails
and the expression evaluates to null. */

int main (void)
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);

	delete base;
	return (0);
}