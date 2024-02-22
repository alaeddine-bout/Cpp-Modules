/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:42:03 by about             #+#    #+#             */
/*   Updated: 2023/11/05 18:54:40 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>


class Weapon {
	private :
		std::string type;
	public :
		Weapon(std::string const &type);
		~Weapon();
		std::string const &getType(void);
		void setType(std:: string const &newType);
};

