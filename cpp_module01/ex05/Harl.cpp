/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:17:51 by about             #+#    #+#             */
/*   Updated: 2023/11/08 19:27:05 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain(std::string level)
{
    void (Harl::*ptr[])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    std::string placeholder[] = {"DEBUG","INFO","WARNING","ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if(level == placeholder[i])
        {
            (this->*ptr[i])();
            break;
        }
    }
}