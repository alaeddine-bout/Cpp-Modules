/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:10:48 by about             #+#    #+#             */
/*   Updated: 2023/10/30 17:35:43 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class Zombie {
    private :
        std::string name;
    public :
        Zombie(std::string);
        ~Zombie();
        void announce();
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);