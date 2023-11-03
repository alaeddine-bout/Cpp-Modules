/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:22:22 by about             #+#    #+#             */
/*   Updated: 2023/10/30 19:03:23 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "* constructor called *" << std::endl;
}

Zombie::Zombie(std::string _name)
{
    name = _name;
    std::cout << "*" << name << ": constructor called *" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "*" << name << ": destructor called *" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}