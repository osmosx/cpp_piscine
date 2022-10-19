#include "HumanA.hpp"

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type){return ;}

HumanA::~HumanA(){}

void	HumanA::attack(void)	const{
	std::cout << _name << " attacks with their " << _type.getType() << std::endl;}
