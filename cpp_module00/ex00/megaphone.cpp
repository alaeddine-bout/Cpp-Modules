/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:59:54 by about             #+#    #+#             */
/*   Updated: 2023/10/26 22:42:56 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>

int main(int ac, char **av)
{

    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; i < ac; i++)
        {
            for(int j = 0; av[i][j]; j++)
                std::cout << (char)toupper(av[i][j]);

        }
    std::cout << std::endl;
    }
}
