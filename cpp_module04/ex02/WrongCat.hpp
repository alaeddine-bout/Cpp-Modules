/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:35:51 by about             #+#    #+#             */
/*   Updated: 2023/11/18 18:37:31 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(std::string Newtype);
		WrongCat(WrongCat &copy);
		WrongCat &operator=(const WrongCat &other);
		~WrongCat();
		std::string getType() const;
		void  makeSound() const;
};