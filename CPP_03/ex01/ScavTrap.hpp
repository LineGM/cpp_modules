/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhanna <lhanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:13:50 by lhanna            #+#    #+#             */
/*   Updated: 2022/11/04 16:13:51 by lhanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap (const ScavTrap &toCopy);
		ScavTrap& operator = (ScavTrap const &toCopy);
		~ScavTrap();

		void attack(std::string const &target);
		void guardGate(void);
};

#endif