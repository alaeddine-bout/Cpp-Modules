/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:21:26 by about             #+#    #+#             */
/*   Updated: 2023/11/12 20:35:31 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class Fixed {
	private :
		int fixed_point;
		static const int fractional_bits = 8;
	public :
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed & operator = (const Fixed &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};