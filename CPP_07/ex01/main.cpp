/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:31:41 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/07 17:08:39 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

class Test
{
	private:
		int num;
	public:
		Test(void) : num(42) {};
		int getNum(void) const
		{
			return (this->num);
		}
};

void printNum(Test const &a)
{
	std::cout << a.getNum() << std::endl;
}

int main(void)
{
	int arrayInt[5] = {1, 2, 3, 4, 5};
	char arrayChar[5] = {'A', 'R', 'R', 'A', 'Y'};
	std::string arrayStr[3];
	arrayStr[0] = "Hello";
	arrayStr[1] = "World";

	iter(arrayInt, 5, printValues);
	iter(arrayChar, 5, printValues);
	iter(arrayStr, 2, printValues);

	Test arrayTest[3];
	iter(arrayTest, 3, printNum);
	return (0);
}