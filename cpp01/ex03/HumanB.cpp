/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:06:38 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/19 13:32:10 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), gun(nullptr) {
	return ;	
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << this->gun->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &gun){
    this->gun = &gun;
}
