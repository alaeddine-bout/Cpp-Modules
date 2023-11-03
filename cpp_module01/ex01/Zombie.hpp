/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:22:26 by about             #+#    #+#             */
/*   Updated: 2023/10/30 19:03:20 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class Zombie {
    private :
        std::string name;
    public :
        Zombie();
        Zombie(std::string);
        ~Zombie();
        void    announce();
};

Zombie* zombieHorde( int N, std::string name);