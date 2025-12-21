#include "ClapTrap.hpp"

int main(){
    ClapTrap robot1("CT-01");
    robot1.attack("target");
    robot1.takeDamage(5);
    robot1.beRepaired(3);
    
    ClapTrap robot2("CT-02");
    for (int i = 0; i < 11; i++)
        robot2.attack("enemy");
    robot2.beRepaired(5);
    
    ClapTrap robot3("CT-03");
    robot3.takeDamage(15);
    robot3.attack("enemy");
    robot3.beRepaired(5);
    
    return 0;
}