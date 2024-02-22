/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:35:20 by about             #+#    #+#             */
/*   Updated: 2023/11/18 19:32:12 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << " WrongAnimal : Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType) : type(newType) {
    std::cout << "WrongAnimal : Parameterized Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &other) {
        this->type = other.type;
    }
	return(*this);
}

std::string WrongAnimal::getType() const {
    return this->type;
}

void    WrongAnimal::makeSound() const{
    std::cout << "* WrongAnimal Noise *" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Distructor called" << std::endl;
}
