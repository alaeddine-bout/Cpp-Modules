/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:03 by about             #+#    #+#             */
/*   Updated: 2023/10/31 19:14:37 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<string>
#include"HumanA.hpp"
#include"HumanB.hpp"

class Weapon {
	private :
		std::string type;
	public :
		Weapon();
		Weapon(std::string);
		~Weapon();
		std::string getType();
		void setType(std:: string);
};