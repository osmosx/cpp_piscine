#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "a ScavTrap is born" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << name << " ScavTrap is born" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

//ScavTrap::ScavTrap(const ScavTrap &to_copy)
//{
//	std::cout << "a ScavTrap is born" << std::endl;
//	*this = to_copy;
//}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " ScavTrap was destroyed" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &to_assign)
{
	this->name = to_assign.name;
	this->health = to_assign.health;
	this->energy = to_assign.energy;
	this->damage = to_assign.damage;
	return (*this);
}

//Function

void	ScavTrap::guardGate(void)
{
	if (this->energy > 0 && this->health > 0)
		std::cout << this->name << " : Gate Keeper mode activated" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->health > 0 && this->energy > 0)
	{
		this->energy--;
		std::cout << this->name << " ScavTrap : attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
	}
}