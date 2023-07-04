/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:12:05 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/05 15:23:44 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define N_ANIMALS 10

int main(void)
{
	{
		Animal *dog = new Dog;
		dog->makeSound();

		/* This will result in error because having at least one pure virtual
		function makes the class abstract */

		// const Animal* animal = new Animal();
		// animal->makeSound();
	}
	return (0);
}