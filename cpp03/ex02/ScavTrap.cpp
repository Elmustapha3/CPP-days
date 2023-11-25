#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    this->name = name;
    std::cout << "ScavTrap " << this->name << " Parametrized Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& c){
    std::cout << "ScavTrap " << this->name << " Copy constructor called" << std::endl;
    this->hitPoint = c.hitPoint;
    this->energyPoint = c.energyPoint;
    this->attackDamage = c.attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& c){
    if (this == &c)
        return *this;
    std::cout << "ScavTrap " << this->name << " Copy assignment operator called" << std::endl;
    this->hitPoint = c.hitPoint;
    this->energyPoint = c.energyPoint;
    this->attackDamage = c.attackDamage;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->name << " ScavTrap destructor called" << std::endl;
}



void ScavTrap::attack(const std::string& target){
    if(this->energyPoint <=  0 || this->hitPoint <=  0)
    {
        std::cout << "ScavTrap " << this->name << " can't attack"<< std::endl;
        return;
    }
    this->energyPoint--;
    std::cout << "ScavTrap " << this->name << " attacks "
    << target << ", causing " << this->attackDamage << " of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}