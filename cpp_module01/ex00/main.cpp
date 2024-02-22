/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:33:26 by about             #+#    #+#             */
/*   Updated: 2023/10/30 18:13:31 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    Zombie* zombie1 = newZombie("zombie lwl");
    zombie1->announce();
    
    randomChump("zombie tani");

    delete zombie1;

    return 0;
}