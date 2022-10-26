#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Default Constructor of Animal" << std::endl;
	std::cout << COLOR_END;
}

Animal::Animal(const Animal &other)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy constructor of Animal" << std::endl;
	std::cout << COLOR_END;
	this->_type = other.getType();
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy assignment operator of Animal" << std::endl;
	std::cout << COLOR_END;
	this->_type = other.getType();

	return (*this);
}

Animal::~Animal(void)
{
	std::cout << COLOR_RED_B;
	std::cout << "Destructor of Animal" << std::endl;
	std::cout << COLOR_END;
}

void	Animal::makeSound(void) const
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "* Animal Sound!!! *" << std::endl;
	std::cout << COLOR_END;
}

const std::string	&Animal::getType(void) const
{
	return (this->_type);
}
