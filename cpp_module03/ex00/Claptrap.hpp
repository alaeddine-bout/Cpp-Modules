/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 02:49:44 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 02:49:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class ClapTrap {
	private :
		std::string name;
		unsigned int hitPoints = 10;
		unsigned int energyPoints = 10;
		unsigned int attackDamage = 0;
	public :
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap & copy);
		ClapTrap & operator = const ClapTrap &other;
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);

		//getters
		const std::string & getName() const;
		unsigned int gethitPoints() const;
		unsigned int getenergyPoints() const;
		unsigned int getattackDamage() const;
};