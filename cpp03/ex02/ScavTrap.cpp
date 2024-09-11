/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:10:36 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/11 15:50:34 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name){
		this->setHitPoints(100);
		this->setEnergyPoints(50);
		this->setAttackDamage(20);
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
} 

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->getHitPoints() == 0) {
		std::cout << "ScavTrap " << this->getName() << " is dead and cannot attack!" << std::endl;
		return;
	}
	else if (this->getEnergyPoints() == 0) {
		std::cout << "ScavTrap " << this->getName() << " has no energy and cannot attack!" << std::endl;
		return;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}