/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:14 by about             #+#    #+#             */
/*   Updated: 2023/11/05 18:19:19 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Weapon.hpp"

class HumanA {
    private :
        std::string _name;
        Weapon &_Weapon;
    public :
        HumanA(const std::string &name, Weapon &weapon);
        void    attack();
        ~HumanA();
};