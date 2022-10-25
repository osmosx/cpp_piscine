#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:

public:
	//Constructor
	ScavTrap();
	ScavTrap(std::string name);
//	ScavTrap(const ScavTrap &to_copy);

	//Destructor
	~ScavTrap();

	//Operator
	ScavTrap &operator=(const ScavTrap &to_assign);

	//Function
	void	guardGate();
	void	attack(const std::string &target);
};

#endif //SCAVTRAP_HPP
