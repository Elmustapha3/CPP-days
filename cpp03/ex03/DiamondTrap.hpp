#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
    std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& c);
        DiamondTrap& operator=(const DiamondTrap& c);
        ~DiamondTrap();
        void attack(const std::string& name);
        void whoAmI();
};

#endif