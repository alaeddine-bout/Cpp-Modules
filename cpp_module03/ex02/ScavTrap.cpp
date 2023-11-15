/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:33:28 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 18:33:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap") {
    hitPoints = 100; 
    energyPoints = 50; 
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}


ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other) {
        this->_name = other._name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
	return(*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << _name << std::endl; 
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap" << _name << "is now in Gatekeeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if(hitPoints == 0) {
		std::cout << "ScavTrap: " << _name << " is dead already!" << std::endl;
		return;
	}
	if(energyPoints > 0) {
		std::cout << "ScavTrap: " << _name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else {
		std::cout << "ScavTrap: " << _name << " has no energy left to attack!" << std::endl;
	}
}