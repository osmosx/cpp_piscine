#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap neo("Neo");
	std::cout << std::endl;
	ClapTrap ivan("Ivan");
	std::cout << std::endl;
	ScavTrap liza("Liza");
	std::cout << std::endl;
	ScavTrap gerald("Gerald");
	std::cout << std::endl;
	FragTrap karl("Karl");
	std::cout << std::endl;
	FragTrap den("Den");
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "FlagTrap" << std::endl;
	karl.attack("Liza");
	karl.highFiveGuys();
	karl.takeDamage(200);
	karl.highFiveGuys();
	den.takeDamage(100);

	std::cout << std::endl;
	std::cout << "ScavTrap" << std::endl;
	liza.attack("Neo");
	liza.guardGate();
	gerald.takeDamage(200);
	gerald.beRepaired(100);
	gerald.guardGate();

	std::cout << std::endl;
	std::cout << "ClapTrap" << std::endl;
	neo.beRepaired(10);
	neo.takeDamage(10);
	neo.attack("Karl");
	ivan.attack("Liza");

	std::cout << std::endl;
}