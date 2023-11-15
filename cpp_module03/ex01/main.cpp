/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:41:45 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 18:41:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    // Test BaseClapTrap
    ClapTrap baseClap("BaseClap");

    // Test ScavTrap
    ScavTrap scav("Scav");

    // Test ScavTrap's special capacity
    scav.guardGate();

    return 0;
}
