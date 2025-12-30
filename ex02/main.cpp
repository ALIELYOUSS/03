#include "FragTrap.hpp"

int main() {
    FragTrap f("Bob");
    ClapTrap c("Jim");

    std::cout << "HP: " << f.getHitPoints() << std::endl;
    std::cout << "EP: " << f.getEnergyPoints() << std::endl;
    std::cout << "AD: " << f.getAttackDamage() << std::endl;

    f.attack("enemy");
    f.highFivesGuys();

    f.takeDamage(40);
    f.beRepaired(20);

    for (int i = 0; i < 105; i++)
        f.attack("enemy");

    FragTrap copy(f);
    FragTrap assign;

    assign = f;
    c.attack("enemy");
}
