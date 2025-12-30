#include "ScavTrap.hpp"

int main() {
    ScavTrap a("Bob");

    std::cout << "HP: " << a.getHitPoints() << std::endl;
    std::cout << "EP: " << a.getEnergyPoints() << std::endl;
    std::cout << "AD: " << a.getAttackDamage() << std::endl;

    a.attack("enemy");
    a.takeDamage(30);
    a.beRepaired(10);

    a.guardGate();

    for (int i = 0; i < 55; i++)
        a.attack("enemy");

    ScavTrap b(a);
    ScavTrap c;
    c = a;
    return 0;
}
    