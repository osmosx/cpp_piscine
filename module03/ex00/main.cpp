#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap karl("Karl");
	ClapTrap neo("Neo");

	neo.attack("Karl");
	karl.takeDamage(1);
	karl.takeDamage(1);
	karl.takeDamage(1);
	karl.attack("Neo");
	karl.beRepaired(5);
}