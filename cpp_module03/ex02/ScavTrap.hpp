/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:28:24 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 18:28:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public :
		ScavTrap();
		ScavTrap(const std::string & name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap & operator = (const ScavTrap &other);
		~ScavTrap();

        //special member function
		void	attack(const std::string & target);
		void	guardGate();
};