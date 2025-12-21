#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target){
    if (_energyPoints == 0){
        std::cout << _name << " No energy points left to attack :(" << std::endl;
        return ;
    }
    if (_hitPoints == 0){
        std::cout << _name << " is already DEAD! xp" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!!" << std::endl;
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoints == 0){
        std::cout << _name << " is already DEAD! xp" << std::endl;
        return ;
    }
    if (amount > _hitPoints)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << _name << " takes " << amount << " of damage \\:P/ !!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_hitPoints == 0){
        std::cout << "ClapTrap " << _name << " is already destroyed and can't be repaired!" << std::endl;
        return ;
    }
    if (_energyPoints == 0){
        std::cout << "ClapTrap " << _name << " has no energy to repair!" << std::endl;
        return ;
    }
    this->_hitPoints += amount;
    this->_energyPoints--;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor called" << std::endl;
}

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout  << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string _name) : _name(_name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << _name << ": called param constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other){
    this->_name = other.getName();
    this->_hitPoints = other.getHitPoints();
    this->_energyPoints = other.getEnergyPoints();
    this->_attackDamage = other.getAttackDamage();
    std::cout << _name << ": called copy constructor" << std::endl;
}

std::string ClapTrap::getName() const{
    return _name;    
}

unsigned int ClapTrap::getHitPoints() const{
    return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const{
    return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const{
    return _attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    if (this != &other) {
        this->_name = other.getName();
        this->_hitPoints = other.getHitPoints();
        this->_energyPoints = other.getEnergyPoints();
        this->_attackDamage = other.getAttackDamage();
    }
    std::cout << "copy assignment operator called" << std::endl;
    return *this;
}