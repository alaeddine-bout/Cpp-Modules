/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:13:41 by about             #+#    #+#             */
/*   Updated: 2023/11/08 18:52:31 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"replaceFile.hpp"

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cerr << "Usage:" << av[0] << " <filename> <s1> <s2>" << std::endl;
        return(1);
    }
    const std::string filename = av[1];
    const std::string s1 = av[2];
    const std::string s2 = av[3];
    
    replaceFile _replace(filename, s1, s2);
    _replace._replaceThenSave();
    return(0);
}