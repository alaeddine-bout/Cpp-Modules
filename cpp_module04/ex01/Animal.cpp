/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:09:02 by about             #+#    #+#             */
/*   Updated: 2023/11/18 18:00:33 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << " Animal : Default Constructor called" << std::endl;
}

Animal::Animal(std::string newType) : type(newType) {
    std::cout << "Animal : Parameterized Constructor called" << std::endl;
}

Animal::Animal(Animal &copy) {
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &other) {
        this->type = other.type;
    }
	return(*this);
}

std::string Animal::getType() const {
    return this->type;
}

void    Animal::makeSound() const{
    std::cout << "* Animal Noise *" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal Distructor called" << std::endl;
}

