/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:08:37 by about             #+#    #+#             */
/*   Updated: 2023/11/08 19:21:50 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl {
	private :
		void debug() {
			std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
		}

		void info() {
			std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
		}

		void warning() {
			std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
		}

		void error() {
			std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
		}
	public :
		void complain( std::string level);
};

