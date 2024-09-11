/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 12:51:22 by dde-giov          #+#    #+#             */
/*   Updated: 2024/09/11 15:45:40 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(); // Default constructor
	ClapTrap(const ClapTrap &src); // Copy constructor
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap &src); // Assignment operator

	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	// Setters
	void setName(std::string name);
	void setHitPoints(int hitPoints);
	void setEnergyPoints(int energyPoints);
	void setAttackDamage(int attackDamage);

	// Getters
	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
};

#endif
