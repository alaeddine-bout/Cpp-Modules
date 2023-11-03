/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:06 by about             #+#    #+#             */
/*   Updated: 2023/10/31 19:13:38 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

Weapon::Weapon()
{
   std::cout << "* constructor called *" << std::endl;
}

Weapon::Weapon(std::string _name)
{
    type = _name;
    std::cout << "*" << type << ": constructor called *" << std::endl;
}

std::string Weapon::getType()
{
    const std::string reference = type;
    return(reference);
}

void    Weapon::setType(std::string Newtype)
{
    type = Newtype;   
}
