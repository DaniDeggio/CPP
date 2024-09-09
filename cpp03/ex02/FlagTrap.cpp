/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:10:36 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/09 21:37:47 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap::ClapTrap(name){
        this->hitPoints = 100;
        this->energyPoints = 100;
        this->attackDamage = 30;
	std::cout << "FlagTrap constructor called" << std::endl;
}

FlagTrap::~FlagTrap() {
	std::cout << "FlagTrap destructor called" << std::endl;
}

void FlagTrap::highFivesGuys() {
	std::cout << "FlagTrap " << this->name << " has entered in High five mode!" << std::endl;
}