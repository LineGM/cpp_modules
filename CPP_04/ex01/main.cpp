/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:45:17 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 15:03:30 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	{
		const Animal *Animals[10];

		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}
		std::cout << "-------------------------------------" << std::endl;
		std::cout << Animals[0]->getType() << std::endl;
		std::cout << Animals[5]->getType() << std::endl;
		Brain *brain;
		brain = Animals[0]->getBrain();
		brain->setIdea("I want eat!", 0);
		brain->setIdea("I want study!", 1);
		std::cout << Animals[0]->getBrain()->getIdea(0) << std::endl;
		std::cout << Animals[0]->getBrain()->getIdea(1) << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		for (int i = 0; i < 10; i++)
			delete Animals[i];
	}
	std::cout << "-------------------------------------" << std::endl;
	{
		std::cout << "Deep copy of Dog copy constructor: " << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog(*dogA);

		delete dogA;
		delete dogB;
	}
	std::cout << "-------------------------------------" << std::endl;
	{
		std::cout << "Deep copy of Dog assignment operator overload: " << std::endl;
		Dog *dogA = new Dog;
		Dog *dogB = new Dog;

		*dogA = *dogB;
		delete dogA;
		delete dogB;
	}
	std::cout << "-------------------------------------" << std::endl;
	{
		std::cout << "Deep copy of Cat copy constructor: " << std::endl;
		Cat *catA = new Cat;
		Cat *catB = new Cat(*catA);

		delete catA;
		delete catB;
	}
	std::cout << "-------------------------------------" << std::endl;
	{
		std::cout << "Deep copy of Cat assignment operator overload: " << std::endl;
		Cat *catA = new Cat;
		Cat *catB = new Cat;

		*catA = *catB;
		delete catA;
		delete catB;
	}
	return (0);
}