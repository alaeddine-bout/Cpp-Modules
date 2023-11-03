/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:22:18 by about             #+#    #+#             */
/*   Updated: 2023/10/30 19:04:29 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for( int i = 0; i < N; i++)
		horde[i] = Zombie(name);
	
	return horde;
}