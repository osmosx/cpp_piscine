#include "Zombie.hpp"

Zombie::Zombie (void){
	return;
}

Zombie::~Zombie(void){
	std::cout << "Zombie " << _name << " destructed" << std::endl;
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
	_name = name;
}

void    Zombie::set_name(std::string name){
	_name = name;
}