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
    ScavTrap scav("scav");

    std::cout << "Initial Status:" << std::endl;
    std::cout << "Name: " << scav.getName() << std::endl;
    std::cout << "Hit Points: " << scav.gethitPoints() << std::endl;
    std::cout << "Energy Points: " << scav.getenergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scav.getattackDamage() << std::endl << std::endl;

    scav.attack("TARGET1");

    scav.takeDamage(20);

    scav.beRepaired(10);

    std::cout << "\nFinal Status:" << std::endl;
    std::cout << "Name: " << scav.getName() << std::endl;
    std::cout << "Hit Points: " << scav.gethitPoints() << std::endl;
    std::cout << "Energy Points: " << scav.getenergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scav.getattackDamage() << std::endl;
    // Test ScavTrap's special capacity
    scav.guardGate();

    return 0;
}
