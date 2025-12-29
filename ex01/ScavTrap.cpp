#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "ScavTrap construvtor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name){
    std::cout << "ScavTrap param constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    if (this != &other)
        ClapTrap::operator=(other); 
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (_energyPoints == 0){
        std::cout << _name << " No energy points left to attack :(" << std::endl;
        return ;
    }
    if (_hitPoints == 0){
        std::cout << _name << " is already DEAD! xp" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!!" << std::endl;
    this->_energyPoints--;
}

void    ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}