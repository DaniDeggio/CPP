/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:18:01 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/11 16:36:31 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap claptrap("ClapTrap");
	ClapTrap claptrap2("ClapTrap2");

	for (int i = 0; i < 11; i++) {
		claptrap.attack("ClapTrap2");
	}
	claptrap2.takeDamage(42);
	claptrap2.attack("ClapTrap");
	claptrap.beRepaired(42);
	claptrap2.beRepaired(42);
	claptrap2.attack("ClapTrap");
	return 0;
}
