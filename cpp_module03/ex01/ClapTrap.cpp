/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:41:23 by marvin            #+#    #+#             */
/*   Updated: 2023/11/15 14:41:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("clapTrap"), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "clapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), hitPoints(10), energyPoints(10), attackDamage(0) { 
	std::cout << "clapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "clapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "clapTrap Copy assignment operator called" << std::endl;
	if (this != &other) {
        this->_name = other._name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
	return(*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "clapTrap Distrcutor called" << std::endl;
}


void	ClapTrap::attack(const std::string& target) {
	if(hitPoints == 0) {
		std::cout << "ClapTrap: " << _name << " is dead already!" << std::endl;
		return;
	}
	if(energyPoints > 0) {
		std::cout << "ClapTrap: " << _name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else {
		std::cout << "ClapTrap: " << _name << " has no energy left to attack!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	if(hitPoints == 0) {
		std::cout << "ClapTrap: " << _name << " is dead already!" << std::endl;
		return;
	}
	if(hitPoints > 0) {
		std::cout << "ClapTrap: " << _name << " takes " << amount << " points of damage !" << std::endl;
		if(amount > hitPoints)
			hitPoints = 0;
		else
			hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap: " << _name << " has no hit points left!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap: " << _name << " is being repaired, gaining " << amount << " hit points !" << std::endl;
	hitPoints += amount;
	energyPoints--;
}

const std::string & ClapTrap::getName() const {
	return _name;
}

unsigned int ClapTrap::gethitPoints() const {
	return hitPoints;
}

unsigned int ClapTrap::getenergyPoints() const {
	return energyPoints;
}

unsigned int ClapTrap::getattackDamage() const {
	return attackDamage;
}