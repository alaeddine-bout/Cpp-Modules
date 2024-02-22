/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:25:51 by about             #+#    #+#             */
/*   Updated: 2023/10/28 20:15:07 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"

void    Contact::SetName(std::string place, std::string name)
{
    if(place == "first_name")
        first_name = name;
    else if(place == "last_name")
        last_name = name;
    else if(place == "nickname")
        nickname = name;
    else if(place == "phone_number")
        phone_number = name;
    else if(place == "darkest_secret")
        darkest_secret = name;
}

std::string Contact::GetName(int i)
{
    if(i == 0)
        return(first_name);
    else if (i == 1)
        return(last_name);
    else if (i == 2)
        return(nickname);
    else if (i == 3)
        return(phone_number);
    return(darkest_secret);
}

void    Contact::displayContact(Contact& contact)
{
    std::cout << "/////////////////////////////////////////" << std::endl;
    std::cout << "First Name: " << contact.first_name << std::endl;
    std::cout << "Last Name: " << contact.last_name << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Phone Number: " << contact.phone_number << std::endl;
    std::cout << "Darkest Secret: " << contact.darkest_secret << std::endl;
    std::cout << "/////////////////////////////////////////" << std::endl;
}