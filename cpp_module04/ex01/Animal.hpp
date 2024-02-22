/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:56:21 by about             #+#    #+#             */
/*   Updated: 2023/11/18 15:38:40 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class Animal {
    protected :
        std::string type;
    public :
        Animal();
        Animal(std::string newType);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound()const;
};