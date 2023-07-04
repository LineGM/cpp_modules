/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:57:01 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/01 21:18:39 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
	std::string m_name;

	public:
	/* Constructor */
	Zombie(std::string name);

	/* Destructor */
	~Zombie( void );

	/* Member functions */
	void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif