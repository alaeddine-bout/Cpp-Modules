/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:04:37 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 15:04:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class ClapTrap {
	private :
		std::string _name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;
	public :
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap & operator = (const ClapTrap &other);
		~ClapTrap();

		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		const std::string &getName() const;
		unsigned int gethitPoints() const;
		unsigned int getenergyPoints() const;
		unsigned int getattackDamage() const;
};