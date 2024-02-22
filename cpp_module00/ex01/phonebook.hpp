/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:34:43 by about             #+#    #+#             */
/*   Updated: 2023/10/28 23:17:50 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
#include <iterator>
#include "contact.hpp"

class PhoneBook
{
    public :
       Contact contact[8];
    public :   
        int setthings(int , int);
        std::string getthings(int , int);
};
