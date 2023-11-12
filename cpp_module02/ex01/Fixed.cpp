/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:29:53 by about             #+#    #+#             */
/*   Updated: 2023/11/12 23:33:21 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = fixed.fixed_point;
	return(*this);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value) : fixed_point(value << fractional_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fixed_point(roundf(value * (1 << fractional_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const
{
    return ((float)fixed_point / (1 << fractional_bits));
}

int Fixed::toInt() const
{
    return fixed_point >> fractional_bits;
}

int Fixed::getRawBits() const {
    return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

std::ostream& operator<<(std::ostream& cout, Fixed const &fixed_) {
    return cout << fixed_.toFloat();
}