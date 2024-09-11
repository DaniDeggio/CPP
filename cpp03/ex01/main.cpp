/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:18:01 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/11 17:10:35 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap claptrap("TestClap");
	ClapTrap claptrap2("TestClap2");
	ScavTrap scavtrap("TestScav");
	ScavTrap scavtrap2("TestScav2");

	for (int i = 0; i < 11; i++) {
		claptrap.attack("TestClap2");
	}
	claptrap2.takeDamage(42);
	claptrap2.attack("TestClap");
	claptrap.beRepaired(42);
	claptrap2.beRepaired(42);
	claptrap2.attack("TestClap");
	scavtrap2.attack("TestClap");
	claptrap.takeDamage(20);
	claptrap.attack("TestScav");
	scavtrap2.guardGate();
	return 0;
}
