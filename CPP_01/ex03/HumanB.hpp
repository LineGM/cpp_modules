/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:57:01 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/01 20:20:58 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string name;
	Weapon		*weapon;

	public:
	HumanB(std::string name);

	void setName(std::string name);
	void setWeapon(Weapon& weapon);
	void attack();

	~HumanB(void);
};

#endif