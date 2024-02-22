/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:02:51 by about             #+#    #+#             */
/*   Updated: 2023/11/18 19:12:28 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain() {
    std::cout << "Brain : default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain : copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain : Copy assignment operator called" << std::endl;
    if(this != &other) {
        for(int i; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain : destructor called" << std::endl;
}