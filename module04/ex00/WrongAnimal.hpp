#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include "Colors.hpp"

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal			&operator=(const WrongAnimal &other);
		virtual ~WrongAnimal(void);
	public:
		void				makeSound(void) const;
		const std::string	&getType(void) const;
	protected:
		std::string			_type;
};

#endif
