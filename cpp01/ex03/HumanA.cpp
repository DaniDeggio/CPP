/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:06:38 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/18 21:21:22 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "HumanA.hpp"

HumanA::HumanA(std::string	name, Weapon &gun) {
	this->name = name;
	this->gun = gun;
}

HumanA::~HumanA(void) {
	return ;
}

void	HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->gun.getType() << std::endl;
}
