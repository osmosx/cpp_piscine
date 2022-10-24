#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	str;

	std::cout << "Use : INFO, DEBUG, WARNING or ERROR, to use Harl" << std::endl;
	if (!getline(std::cin, str))
		return (1);
	harl.complain(str);
	return (0);
}
