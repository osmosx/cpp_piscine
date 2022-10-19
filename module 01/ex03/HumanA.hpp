#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA{
private:
	std::string	_name;
	Weapon&		_type;
public:
	void attack(void) const;
	HumanA(std::string name, Weapon& type);
	~HumanA();
};

#endif //HUMANA_HPP
