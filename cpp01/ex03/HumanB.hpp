/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-giov <dde-giov@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:50:20 by dde-giov          #+#    #+#             */
/*   Updated: 2024/06/19 13:31:41 by dde-giov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string	name;
		Weapon	*gun;
	public:
		HumanB(std::string	name);
		~HumanB();
		void	attack();
		void    setWeapon(Weapon &gun);
};

#endif