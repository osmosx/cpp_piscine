#include "Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << COLOR_GREEN_B;
	std::cout << "Default constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	delete this->_brain;
	_brain = new Brain(*(other._brain));
	std::cout << COLOR_GREEN_B;
	std::cout << "Copy constructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

Cat	&Cat::operator=(const Cat &other)
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

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << COLOR_RED_B;
	std::cout << "Destructor of " << this->_type << std::endl;
	std::cout << COLOR_END;
}

void	Cat::makeSound(void) const
{
	std::cout << COLOR_PURPLE_B;
	std::cout << "* Meow! *" << std::endl;
	std::cout << COLOR_END;
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}
