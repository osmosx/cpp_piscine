#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap den("Den");
	std::cout << std::endl;
	ClapTrap neo("Neo");
	std::cout << std::endl;
	ClapTrap karl("Karl");
	std::cout << std::endl;
	ScavTrap leo("Leo");
	std::cout << std::endl;
	ScavTrap ivan("Ivan");
	std::cout << std::endl;
	std::cout << std::endl;

	leo.attack("Neo");
	leo.guardGate();
	karl.attack("Neo");
	neo.beRepaired(10);
	neo.takeDamage(10);
	neo.attack("Karl");
	den.attack("Leo");
	ivan.takeDamage(200);

	ivan.beRepaired(100);
	ivan.guardGate();

	std::cout << std::endl;
}
