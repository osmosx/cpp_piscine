#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap is born" << std::endl;
	this->energy = 10;
	this->health = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " is born" << std::endl;
	this->name = name;
	this->energy = 10;
	this->health = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &inst)
{
	std::cout << "a clone of " << inst.name << " was created" << std::endl;
	*this = inst;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->name << " was destroyed" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &to_assign)
{
	this->name = to_assign.name;
	this->health = to_assign.health;
	this->energy = to_assign.energy;
	this->damage = to_assign.damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->health && this->energy)
	{
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->health && this->energy)
	{
		this->health -= amount;
		std::cout << this->name << " : ouch! i lost " << amount << " healths points" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy && this->health)
	{
		this->health += amount;
		this->energy--;
		std::cout << this->name << " : I succesfully repaired myself i'm now at " << this->health << " health and i have " << this->energy << " energy left" << std::endl;
	}
}