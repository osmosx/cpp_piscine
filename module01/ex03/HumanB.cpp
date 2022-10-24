#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(0){return ;}

HumanB::~HumanB(){}

void	HumanB::attack(void)	const{
	if (_type)std::cout << _name << " attacks with their "  << _type->getType() << std::endl;}

void	HumanB::setWeapon(Weapon& type){_type = &type;}