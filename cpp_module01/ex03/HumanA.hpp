/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:14 by about             #+#    #+#             */
/*   Updated: 2023/10/31 19:20:51 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include"Weapon.hpp"

class HumanA {
    private :
        std::string name;
        Weapon &Weapon;
    public :
        HumanA(std::string _name, Weapon &weapon);
        void    attack();
};