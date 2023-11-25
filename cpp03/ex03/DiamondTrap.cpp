#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->energyPoint = ScavTrap::energyPoint;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"){
    this->name = name;
    std::cout << "DiamonTrap " << this->name << " Parametrized Constructor called" << std::endl;
    this->energyPoint = ScavTrap::energyPoint;
}

DiamondTrap::DiamondTrap(const DiamondTrap& c){
    std::cout << "DiamondTrap " << this->name << " Copy constructor called" << std::endl;
    *this = c;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& c){
    if (this == &c)
        return *this;
    std::cout << "DiamondTrap " << this->name << " Copy assignment operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target){
   ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name : " << this->name << "and ClaTrap name : " << ClapTrap::name << std::endl; 
}
