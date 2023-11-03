/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:22:20 by about             #+#    #+#             */
/*   Updated: 2023/10/30 19:10:14 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main() {
    int Zombies = 5;
    std::string Name = "LHERBA";

    Zombie* horde = zombieHorde(Zombies, Name);

    for (int i = 0; i < Zombies; i++) {
        horde[i].announce();
    }

    delete[] horde; 

    return 0;
}