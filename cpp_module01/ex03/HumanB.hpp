/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:09 by about             #+#    #+#             */
/*   Updated: 2023/11/05 18:27:16 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Weapon.hpp"

class HumanB{
    private :
        std::string _name;
        Weapon *_weapon;
    public :
        void    attack(void);
        void    setWeapon(Weapon &weapon);
        HumanB(const std::string name);
        ~HumanB();
};