/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:28:22 by about             #+#    #+#             */
/*   Updated: 2023/11/18 15:52:37 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << " Cat : Default Constructor called" << std::endl;
    brain = new Brain();
    type = "Cat";
}

Cat::Cat(std::string newType) : Animal(newType) {
    std::cout << "Cat : Parameterized Constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other) {
        this->type = other.type;
        if(brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
	return(*this);
}

Cat::Cat(const Cat &copy) : Animal(){
    std::cout << "Cat Copy Constructor called" << std::endl;
    this->type = copy.type;
    brain = new Brain(*copy.brain);
}

std::string Cat::getType() const {
    return this->type;
}

void    Cat::makeSound() const{
    std::cout << "* Meowww *" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat Distructor called" << std::endl;
    delete brain;
}
