#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal &other);
		Animal				&operator=(const Animal &other);
		virtual ~Animal(void);
	public:
		const std::string	&getType(void) const;
		virtual void		makeSound(void) const;
	protected:
		std::string			_type;
};

#endif
