#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Default Constructor of Animal" << std::endl;
	std::cout << COLOR_END;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy constructor of Animal" << std::endl;
	std::cout << COLOR_END;
	this->_type = other.getType();
}

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy assignment operator of Animal" << std::endl;
	std::cout << COLOR_END;
	this->_type = other.getType();

	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << COLOR_RED_B;
	std::cout << "Destructor of Animal" << std::endl;
	std::cout << COLOR_END;
}

const std::string	&AAnimal::getType(void) const
{
	return (this->_type);
}
