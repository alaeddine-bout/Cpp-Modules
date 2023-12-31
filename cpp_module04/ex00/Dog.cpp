/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:28:20 by about             #+#    #+#             */
/*   Updated: 2023/11/18 19:30:38 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() {
    std::cout << " Dog : Default Constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(std::string newType) : Animal(newType) {
    std::cout << "Dog : Parameterized Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other) {
        this->type = other.type;
    }
	return(*this);
}

std::string Dog::getType() const {
    return this->type;
}

void    Dog::makeSound() const{
    std::cout << "* Haw Haw *" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog Distructor called" << std::endl;
}