/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:18:01 by dde-giov          #+#    #+#             */
/*   Updated: 2024/07/19 14:21:48 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap claptrap("ClapTrap");
	ClapTrap claptrap2("ClapTrap2");

	for (int i = 0; i < 10; i++) {
		claptrap.attack("ClapTrap2");
		claptrap2.takeDamage(2);
		claptrap.beRepaired(2);
	}
	
	return 0;
}
