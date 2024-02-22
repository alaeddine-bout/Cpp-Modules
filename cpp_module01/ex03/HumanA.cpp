/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:16 by about             #+#    #+#             */
/*   Updated: 2023/11/05 19:06:24 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

void    HumanA::attack()
{
      std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name) , _Weapon(weapon)
{
}

HumanA::~HumanA()
{
}
