/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:28:14 by about             #+#    #+#             */
/*   Updated: 2023/11/18 19:30:33 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat();
		Cat(std::string Newtype);
		Cat(const Cat &copy);
		Cat &operator=(const Cat &other);
		~Cat();
		std::string getType() const;
		void  makeSound() const;
};