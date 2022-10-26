#include "Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << COLOR_GREEN_B;
	std::cout << "Default constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	delete this->_brain;
	_brain = new Brain(*(other._brain));
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Dog	&Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *(other._brain);
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy assignment operator of " << this->_type << std::endl;
	std::cout << COLOR_END;

	return (*this);
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << COLOR_RED_B;
	std::cout << "Destructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

void	Dog::makeSound(void) const
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "* Bark! *" << std::endl;
	std::cout << COLOR_END;
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}
