#include "Zombie.hpp"

int main()
{
	std::string index;
	std::string name;

	while (1)
	{
		Zombie *z;
		std::cout<<"choose a function (newZombie() : 1, randomChump() : 2 "<<std::endl;
		getline(std::cin, index);
		if (index[0] == '1')
		{
			std::cout<<"enter a name"<<std::endl;
			getline(std::cin, name);
			z = newZombie(name);
			z->announce();
			delete z;
		}
		else if (index[0] == '2')
		{
			std::cout<<"enter a name"<<std::endl;
			getline(std::cin, name);
			randomChump(name);
		} else
			return (0);
	}
}