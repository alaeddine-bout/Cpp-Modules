/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 02:49:26 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 02:49:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

    ClapTrap clap1("CLAP1");

    std::cout << "Initial Status:" << std::endl;
    std::cout << "Name: " << clap1.getName() << std::endl;
    std::cout << "Hit Points: " << clap1.gethitPoints() << std::endl;
    std::cout << "Energy Points: " << clap1.getenergyPoints() << std::endl;
    std::cout << "Attack Damage: " << clap1.getattackDamage() << std::endl << std::endl;

    clap1.attack("TARGET1");

    clap1.takeDamage(5);

    clap1.beRepaired(3);

    std::cout << "\nFinal Status:" << std::endl;
    std::cout << "Name: " << clap1.getName() << std::endl;
    std::cout << "Hit Points: " << clap1.gethitPoints() << std::endl;
    std::cout << "Energy Points: " << clap1.getenergyPoints() << std::endl;
    std::cout << "Attack Damage: " << clap1.getattackDamage() << std::endl;

    return 0;
}
