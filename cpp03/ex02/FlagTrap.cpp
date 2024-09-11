/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:10:36 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/11 15:51:20 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap::ClapTrap(name){
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FlagTrap constructor called" << std::endl;
}

FlagTrap::~FlagTrap() {
	std::cout << "FlagTrap destructor called" << std::endl;
}

void FlagTrap::highFivesGuys() {
	std::cout << "FlagTrap " << this->getName() << " has entered in High five mode!" << std::endl;
}