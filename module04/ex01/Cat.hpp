#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		Cat		&operator=(const Cat &other);
		~Cat(void);
	public:
		Brain	*getBrain(void) const;
		void	makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif
