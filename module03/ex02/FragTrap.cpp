#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap is born" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << name << " FragTrap is born" << std::endl;
	this->name = name;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

//FragTrap::FragTrap(FragTrap &to_copy)
//{
//	std::cout << "FragTrap is born" << std::endl;
//	*this = to_copy;
//}

FragTrap::~FragTrap()
{
	std::cout << this->name << " FragTrap was destroyed" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &to_assign)
{
	this->name = to_assign.name;
	this->health = to_assign.health;
	this->energy = to_assign.energy;
	this->damage = to_assign.damage;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	if (this->energy > 0 && this->health > 0)
		std::cout << this->name << " : Please can we High Five guys?" << std::endl;
}