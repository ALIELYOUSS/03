#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "FragTrap Called default constructor" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name){
    std::cout << "Fragtrap called param constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
    std::cout << "FragTrap called copy constructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void FragTrap::attack(const std::string& target){
    if (_energyPoints == 0){
        std::cout << _name << " No energy points left to attack :(" << std::endl;
        return ;
    }
    if (_hitPoints == 0){
        std::cout << _name << " is already DEAD! xp" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!!" << std::endl;
    this->_energyPoints--;
}

void    FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}