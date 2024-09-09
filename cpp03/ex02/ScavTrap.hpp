 
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(std::string name);
		~ScavTrap() override;
		void guarrGate();
		void attack(const std::string &target) override;
};

#endif