/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:37:52 by about             #+#    #+#             */
/*   Updated: 2023/11/18 18:40:25 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << " WrongCat : Default Constructor called" << std::endl;
}

WrongCat::WrongCat(std::string newType) : WrongAnimal(newType) {
    std::cout << "WrongCat : Parameterized Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal(copy) {
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &other) {
        this->type = other.type;
    }
	return(*this);
}

std::string WrongCat::getType() const {
    return this->type;
}

void    WrongCat::makeSound() const{
    std::cout << "* Meowww * (wrongcat)" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Distructor called" << std::endl;
}
