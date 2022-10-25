#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:

public:
	//Constructor
	FragTrap();
	FragTrap(std::string name);
//	FragTrap(FragTrap &to_copy);

	//Destructor
	~FragTrap();

	//operator
	FragTrap	&operator=(const FragTrap &to_assign);

	//Function
	void	highFiveGuys();
};

#endif //FRAGTRAP_HPP
