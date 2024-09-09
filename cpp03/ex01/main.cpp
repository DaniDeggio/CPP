/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:18:01 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/09 22:08:18 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap claptrap("testClap");
	ClapTrap claptrap2("test2Clap");
	ScavTrap scavtrap("TestScav");
	ScavTrap scavtrap2("TestScav2");
	
	for (int i = 0; i < 10; i++) {
		claptrap.attack("ClapTrap2");
		claptrap2.takeDamage(2);
		claptrap.beRepaired(2);
	}
	for (int i = 0; i < 10; i++) {
		scavtrap.attack("ScavTrap2");
		scavtrap2.takeDamage(2);
		scavtrap.beRepaired(2);
	}
	scavtrap2.guardGate();
	return 0;
}
