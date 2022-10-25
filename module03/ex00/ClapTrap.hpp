#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int			health;
	int			energy;
	int			damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &inst);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &to_assign);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_HPP
