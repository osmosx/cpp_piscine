#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"
#include "Colors.hpp"

class	AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal &other);
		AAnimal				&operator=(const AAnimal &other);
		virtual ~AAnimal(void);
	public:
		const std::string	&getType(void) const;
		virtual void		makeSound(void) const = 0;
	protected:
		std::string			_type;
};

#endif
