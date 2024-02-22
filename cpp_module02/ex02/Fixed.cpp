/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:15:28 by about             #+#    #+#             */
/*   Updated: 2023/11/12 23:26:31 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &fixed)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = fixed.fixed_point;
	return(*this);
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value) : fixed_point(value << fractional_bits)
{
    //std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fixed_point(roundf(value * (1 << fractional_bits)))
{
    //std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
   // std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const {
    return ((float)fixed_point / (1 << fractional_bits));
}

int Fixed::toInt() const {
    return fixed_point >> fractional_bits;
}

int	Fixed::getRawBits(void) const {
	return fixed_point;
}

void Fixed::setRawBits(int const raw) {
	fixed_point = raw;
}

Fixed Fixed::operator+(const Fixed &fixed) const {
    Fixed result;
    result.setRawBits(this->fixed_point + fixed.fixed_point);
    return result;
}

Fixed Fixed::operator-(const Fixed &fixed) const {
    Fixed result;
    result.setRawBits(this->fixed_point - fixed.fixed_point);
    return result;
}

Fixed Fixed::operator*(const Fixed &fixed) const {
    Fixed result;
    long res = (this->fixed_point * fixed.fixed_point);
    result.setRawBits(res >> this->fractional_bits);
    return result;
}

Fixed Fixed::operator/(const Fixed &fixed) const {
    Fixed result;
    long res = this->fixed_point;
    result.setRawBits((res << this->fractional_bits) / fixed.fixed_point);
    return result;
}

Fixed Fixed::operator++(void) {
    this->fixed_point++;
    return *this;
}

Fixed Fixed::operator--(void) {
    this->fixed_point--;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed before;
    before.fixed_point = this->fixed_point;
    this->fixed_point++;
    return before;
}

Fixed Fixed::operator--(int) {
    Fixed before;
    before.fixed_point = this->fixed_point;
    this->fixed_point--;
    return before;
}

bool Fixed::operator>(const Fixed &fixed) const {
    return fixed_point > fixed.fixed_point;
}

bool Fixed::operator<(const Fixed &fixed) const {
    return fixed_point < fixed.fixed_point;
}

bool Fixed::operator>=(const Fixed &fixed) const {
    return fixed_point >= fixed.fixed_point;
}

bool Fixed::operator<=(const Fixed &fixed) const {
    return fixed_point <= fixed.fixed_point;
}

bool Fixed::operator==(const Fixed &fixed) const {
    return fixed_point == fixed.fixed_point;
}

bool Fixed:: operator!=(const Fixed &fixed) const {
    return fixed_point != fixed.fixed_point;
}

Fixed &Fixed::max(Fixed &i, Fixed &j) {
    if( i.fixed_point > j.fixed_point)
        return i;
    else
        return j;
}

const Fixed &Fixed::max(const Fixed &i, const Fixed &j) {
    if( i.fixed_point > j.fixed_point)
        return i;
    else
        return j;
}

Fixed &Fixed::min(Fixed &i, Fixed &j) {
    if( i.fixed_point < j.fixed_point)
        return i;
    else
        return j;
}

const Fixed &Fixed::min(const Fixed &i, const Fixed &j) {
    if( i.fixed_point < j.fixed_point)
        return i;
    else
        return j;
}

std::ostream& operator<<(std::ostream& cout, const Fixed &fixed_) {
    return cout << fixed_.toFloat();
}

std::ostream& operator<<(std::ostream& cout, Fixed &fixed_) {
    return cout << fixed_.toFloat();
}
