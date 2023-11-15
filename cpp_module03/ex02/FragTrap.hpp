/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:56:03 by about             #+#    #+#             */
/*   Updated: 2023/11/15 23:11:09 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
        FragTrap();
        FragTrap(const std::string & name);
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();

        //special member function
        void highFivesGuys(void);
}; 