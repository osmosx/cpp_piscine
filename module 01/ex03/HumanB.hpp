#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
private:
	std::string	_name;
	Weapon*		_type;
public:
	void	setWeapon(Weapon& type);
	void	attack(void)	const;
	HumanB(std::string name);
	~HumanB();
};

#endif