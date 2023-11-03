/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:13:12 by about             #+#    #+#             */
/*   Updated: 2023/10/31 16:20:14 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std::string theString = "HI THIS IS BRAIN";
    std::string *stringPTR = &theString;
    std::string stringREF = theString;

    //printing memory
    std::cout << "• The memory address of the string variable: " << &theString << std::endl;
    std::cout << "• The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "• The memory address held by stringREF: " << &stringREF << std::endl;

    //printing value
    std::cout << "• The value of the string variable: " << theString << std::endl;
    std::cout << "• The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF: " << stringREF << std::endl;
}