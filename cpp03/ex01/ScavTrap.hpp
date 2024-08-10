 
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include ("ClapTrap.hpp)

class ScavTrap : pubblic ClapTrap {
    pubblic:
        ScavTrap(std::string name) override;
        void guarrGate();
};

#endif