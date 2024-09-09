/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:10:36 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/09 20:24:33 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name){
        this->hitPoints = 100;
        this->energyPoints = 50;
        this->attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
} 

void ScavTrap::guarrGate() {
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->hitPoints == 0) {
		std::cout << "ScavTrap " << this->name << " is dead and cannot attack!" << std::endl;
		return;
	}
	else if (this->energyPoints == 0) {
		std::cout << "ScavTrap " << this->name << " has no energy and cannot attack!" << std::endl;
		return;
	}
	this->energyPoints -= 1;
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
}