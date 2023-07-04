/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:14:33 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/08 15:13:24 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

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

int main(void) 
{
	Array<Test>			arrayTest(5);
	Array<int>			arrayInt(5);
	Array<std::string>	arrayString(5);
	Array<int>			empty;

	arrayInt[2] = 2022;
	arrayString[4] = "String";
	std::cout << arrayInt[2] << std::endl << arrayString[4] << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << arrayTest[4].getNum() << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << empty.size() << std::endl;
	std::cout << arrayInt.size() << std::endl;
	std::cout << arrayString.size() << std::endl;
	std::cout << arrayTest.size() << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << "Empty array size: " << std::endl;
	std::cout << empty.size() << std::endl;
	empty = arrayInt;
	std::cout << "Empty size after empty = arrayInt: " << std::endl;
	std::cout << empty.size() << std::endl;
	std::cout << "empty[2] and arrayInt[2]: " << std::endl;
	std::cout << empty[2] << " and " << arrayInt[2] << std::endl;
	std::cout << "-------------------" << std::endl;

	try 
	{
		std::cout << arrayInt[10] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	try
	{
		std::cout << arrayTest[-1].getNum() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp;
// 		tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }