/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:03:43 by about             #+#    #+#             */
/*   Updated: 2023/10/29 15:52:21 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void formatAndPrint(std::string& text) {
    if (text.length() <= 10) {
        std::cout << std::setw(10) << std::right << text;
    } else {
        std::cout << std::setw(10) << std::right << text.substr(0, 9) + ".";
    }
}

int main(int ac, char **av)
{
	PhoneBook phonebook;
	std::string placeholder;
	
	std::cout << "///////////////////////////////////////////////" << std::endl;
	std::cout << "//                                           //" << std::endl;
	std::cout << "//       !   WELCOME PHONEBOOK USER   !      //" << std::endl;
	std::cout << "//                                           //" << std::endl;
	for(int index = 0; index < 8; index++)
	{
		std::cout << "///////////////////////////////////////////////" << std::endl;
		std::cout << "//                                           //" << std::endl;
		std::cout << "//             CHOSE YOUR OPTION :           //" << std::endl;
		std::cout << "//                                           //" << std::endl;
		std::cout << "//        *ADD*     *SEARCH*     *EXIT*      //" << std::endl;
		std::cout << "//                                           //" << std::endl;
		std::cout << "///////////////////////////////////////////////" << std::endl;
		std::cout << std::endl;
		getline(std::cin, placeholder);
		if(std::cin.eof())
			exit(1);
		if(placeholder == "ADD")
		{
			for(int number = 0; number < 5; number++)
			{
				if(number == 0)
				{
					std::cout << "Add First Name pls :" << std::endl;
					if(!phonebook.setthings(number , index))
						number--;
				}
				else if(number == 1)
				{
					std::cout << "Add Last Name too :" << std::endl;
					if(!phonebook.setthings(number , index))
						number--;
				}
				else if (number == 2)
				{
					std::cout << "Got a cool Nickname ?" << std::endl;
					if(!phonebook.setthings(number , index))
						number--;
				}
				else if (number == 3)
				{
					std::cout << "Add Phone Number :" << std::endl;
					if(!phonebook.setthings(number , index))
						number--;
				}
				else if (number == 4)
				{
					std::cout << "Now give me your darkest secret :" << std::endl;
					if(!phonebook.setthings(number , index))
						number--;
					else {
						std::cout << std::endl;
						std::cout << "\\\\NEW CONTACT HAS BEEN ADDED//" << std::endl;
						std::cout << std::endl;
					}
				}
				
			}
		}
		else if(placeholder == "SEARCH")
		{
			index--;
			
			if(phonebook.getthings(0, 0) == "")
			{
				std::cout << "No Contacts Found, add contact first!" << std::endl;
			}
			else 
			{
				std::cout << "///////////////////////////////////////////////" << std::endl;
				std::cout << "//          |          |          |          //" << std::endl;
				std::cout << "//  INDEX   |  FIRST   |   LAST   | NICKNAME //" << std::endl;
				std::cout << "//          |  NAME    |   NAME   |          //" << std::endl;
				std::cout << "//          |          |          |          //" << std::endl;
				std::cout << "///////////////////////////////////////////////" << std::endl;
	
				for(int number = 0; number < 8 ; number++)
				{
					placeholder = phonebook.getthings(0, number);
					if (placeholder == "")
					{
						std::cout << "///////////////////////////////////////////////" << std::endl;
						break ;
					}
					std::cout << "//";
					std ::string num = std::to_string(number);
					formatAndPrint(num);
					std::cout << "|";
					formatAndPrint(placeholder);
					std::cout << "|";
					placeholder = phonebook.getthings(1, number);
					formatAndPrint(placeholder);
					std::cout << "|";
					placeholder = phonebook.getthings(2, number);
					formatAndPrint(placeholder);
					std::cout << "//" << std::endl;
				}
				std::cout << "Enter Contact Index: ";
    			std::string search;
				getline(std::cin, search);
				if(std::cin.eof())
					exit(1);
				int searchindex = std::atoi(search.c_str());
				if(searchindex >= 0 && searchindex < 8)
				{
					std::cout << "Contact Details for Index " << searchindex << ":" << std::endl;
					phonebook.contact->displayContact(phonebook.contact[searchindex]);
					continue;
				}
				else
				{
					std::cout << "Invalid index. Contact not found." << std::endl;
					continue;
				}
			}
		}
		else if(placeholder == "EXIT")
		{
			index--;
			int i = 0;
			while(1)
			{
			  
				if(i == 0)
				{
					std::cout << "DISCLAIMER! all contacts will be erased :) " << std::endl;
					std::cout << "type YES/Y to exit or NO/N to cancel"<< std::endl;
					std::cin >> placeholder;   
				}
				if(placeholder == "YES" || placeholder == "Y")
					std::exit(0);
				else if(placeholder == "NO" || placeholder == "N")
					break ;
				else
				{
					std::cout << "type YES or NO!" << std::endl;
					std::cin >> placeholder;
					i = 1;
				}
			}
		}
		else
		{
			index--;
			std::cout << "MUST USE ONLY THE GIVEN OPTIONS!" << std::endl;
			std::cout << std::endl;
			continue;
		}
		if(index == 7)
			index = -1;
	}
}