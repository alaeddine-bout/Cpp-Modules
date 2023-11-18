/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:28:18 by about             #+#    #+#             */
/*   Updated: 2023/11/18 19:30:09 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal {
	private :
		Brain *brain;
	public :
		Dog();
		Dog(std::string Newtype);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &other);
		~Dog();
		std::string getType() const;
		void  makeSound() const;
};