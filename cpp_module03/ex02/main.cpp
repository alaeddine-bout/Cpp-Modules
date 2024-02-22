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

#include"FragTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    FragTrap Frag("Frag");

    std::cout << "Initial Status:" << std::endl;
    std::cout << "Name: " << Frag.getName() << std::endl;
    std::cout << "Hit Points: " << Frag.gethitPoints() << std::endl;
    std::cout << "Energy Points: " << Frag.getenergyPoints() << std::endl;
    std::cout << "Attack Damage: " << Frag.getattackDamage() << std::endl << std::endl;

    Frag.attack("TARGET1");

    Frag.takeDamage(20);

    Frag.beRepaired(10);

    std::cout << "\nFinal Status:" << std::endl;
    std::cout << "Name: " << Frag.getName() << std::endl;
    std::cout << "Hit Points: " << Frag.gethitPoints() << std::endl;
    std::cout << "Energy Points: " << Frag.getenergyPoints() << std::endl;
    std::cout << "Attack Damage: " << Frag.getattackDamage() << std::endl;
    // Test FragTrap's special capacity
    Frag.highFivesGuys();

    return 0;
}
