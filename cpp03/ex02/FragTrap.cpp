#include "FragTrap.hpp"

FragTrap::FragTrap(){
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name){
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    this->name = name;
    std::cout << "FragTrap " << this->name << " Parametrized Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& c){
    std::cout << "FragTrap " << this->name << " Copy constructor called" << std::endl;
    this->hitPoint = c.hitPoint;
    this->energyPoint = c.energyPoint;
    this->attackDamage = c.attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& c){
    if (this == &c)
        return *this;
    std::cout << "FragTrap " << this->name << " Copy assignment operator called" << std::endl;
    this->hitPoint = c.hitPoint;
    this->energyPoint = c.energyPoint;
    this->attackDamage = c.attackDamage;
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}



void FragTrap::attack(const std::string& target){
    if(this->energyPoint <=  0 || this->hitPoint <=  0)
    {
        std::cout << "FragTrap " << this->name << " can't attack"<< std::endl;
        return;
    }
    this->energyPoint--;
    std::cout << "FragTrap " << this->name << " attacks "
    << target << ", causing " << this->attackDamage << " of damage!" << std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->name << " says high fives guys" << std::endl;
}