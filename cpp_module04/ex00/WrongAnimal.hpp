/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:33:01 by about             #+#    #+#             */
/*   Updated: 2023/11/18 19:32:03 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class WrongAnimal {
     protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(std::string newType);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &other);
        virtual ~WrongAnimal();
        std::string getType() const;
        virtual void makeSound()const;
};