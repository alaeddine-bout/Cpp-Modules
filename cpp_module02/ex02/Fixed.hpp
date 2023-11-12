/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 23:15:56 by about             #+#    #+#             */
/*   Updated: 2023/11/12 23:22:38 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<cmath>

class Fixed {
	private :
		int fixed_point;
		static const int fractional_bits = 8;
	public :
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int value);
		Fixed(const float value);
		Fixed & operator = (const Fixed &fixed);
		~Fixed();

		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		// arithmetic operators
		Fixed operator+(const Fixed &fixed) const;
		Fixed operator-(const Fixed &fixed) const;
		Fixed operator*(const Fixed &fixed) const;
		Fixed operator/(const Fixed &fixed) const;

		// the 4 increment/decrement
		Fixed operator++(void);
		Fixed operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		// min / max / min const / max const
		static Fixed &max(Fixed &i, Fixed &j);
		static const Fixed &max(const Fixed &i, const Fixed &j);
		static Fixed &min(Fixed &i, Fixed &j);
		static const Fixed &min(const Fixed &i, const Fixed &j);
		   
		// comparison operators
		bool operator>(const Fixed &fixed) const;
		bool operator<(const Fixed &fixed) const;
		bool operator>=(const Fixed &fixed) const;
		bool operator<=(const Fixed &fixed) const;
		bool operator==(const Fixed &fixed) const;
		bool operator!=(const Fixed &fixed) const;

		
};

std::ostream& operator<<(std::ostream& cout, const Fixed &fixed_);
std::ostream& operator<<(std::ostream& cout, Fixed &fixed_);