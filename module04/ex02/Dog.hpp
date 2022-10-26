#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class	Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(const Dog &other);
		Dog		&operator=(const Dog &other);
		~Dog(void);
	public:
		Brain	*getBrain(void) const;
		void	makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif
