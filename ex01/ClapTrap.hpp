# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap{
protected:
	std::string 	_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap& other);
	virtual void attack(const std::string& target);
	void   		 takeDamage(unsigned int amount);
	void         beRepaired(unsigned int amount);
	std::string  getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;  
	unsigned int getAttackDamage() const;
	ClapTrap& 	 operator=(const ClapTrap& other);
};
# endif