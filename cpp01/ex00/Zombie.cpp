/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 02:42:50 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/18 03:05:22 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->name << "> has been destroyed" << std::endl;
}

void    Zombie::announce(void) {
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
