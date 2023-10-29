/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:09:00 by about             #+#    #+#             */
/*   Updated: 2023/10/28 23:40:36 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int ifNumeric(const std::string &str) {
    for (int i = 0; i < str.length(); i++)
	{
        if (!std::isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

std::string	PhoneBook::getthings(int number, int index)
{
	if(number == 0)
		return(contact[index].GetName(0));
	else if(number == 1)
		return(contact[index].GetName(1));
	else if(number == 2)
		return(contact[index].GetName(2));
	else if(number == 3)
		return(contact[index].GetName(3));
	return(contact[index].GetName(4));
}

int	PhoneBook::setthings(int number, int index)
{
	std::string place;

	getline(std::cin, place);
	if(std::cin.eof())
		exit(1);
	if(place == "")
		return(0);
	if(number == 0)
		contact[index].SetName("first_name", place);
	else if(number == 1)
		contact[index].SetName("last_name", place);
	else if(number == 2)
		contact[index].SetName("nickname", place);
	else if(number == 3)
	{
		if(ifNumeric(place))
			contact[index].SetName("phone_number", place);
		else
		{
			std::cout << "usually phone numbers contain NUMBERS ??" << std::endl;
			return(0);
		}
	}
	else if(number == 4)
		contact[index].SetName("darkest_secret", place);
	return(1);
}
