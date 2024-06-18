/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:06:38 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/18 21:21:25 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) {
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon gun){
    this->gun = gun;
}
