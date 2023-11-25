#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hitPoint(10), energyPoint(10), attackDamage(0){
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): hitPoint(10), energyPoint(10), attackDamage(0){
    this->name = name;
    std::cout << "ClapTrap " << this->name <<" Parametrized Constructor  called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c){
    std::cout << "ClapTrap " << this->name <<  "Copy constructor  called" << std::endl;
    this->hitPoint = c.hitPoint;
    this->energyPoint = c.energyPoint;
    this->attackDamage = c.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c){
    if (this == &c)
        return *this;
    std::cout << "ClapTrap " << this->name << "Copy assignment operator called" << std::endl;
    this->hitPoint = c.hitPoint;
    this->energyPoint = c.energyPoint;
    this->attackDamage = c.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << this->name <<" destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if(this->energyPoint <=  0 || this->hitPoint <=  0)
    {
        std::cout << "ClapTrap " << this->name <<" can't attack"<< std::endl;
        return;
    }
    this->energyPoint--;
    std::cout << "ClapTrap " << this->name << " attacks "
    << target << ", causing " << this->attackDamage << " of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name <<" take damage" << std::endl;
    if (amount - this->hitPoint > 0)
    {
        this->hitPoint = 0;
        return;
    }
    this->hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->energyPoint <=  0 || this->hitPoint <=  0){
        std::cout << "ClapTrap " << this->name <<" can't repairs itself" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " repairs itself by " << amount << " points" << std::endl;
    this->energyPoint--;
    this->hitPoint += amount;
}
