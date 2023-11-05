/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:06 by about             #+#    #+#             */
/*   Updated: 2023/11/05 18:56:57 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"


Weapon::Weapon(std::string const &_name)
{
    type = _name;
}

const std::string &Weapon::getType()
{
    return(type);
}

void    Weapon::setType(std::string const &Newtype)
{
   type = Newtype;   
}


Weapon::~Weapon()
{
}