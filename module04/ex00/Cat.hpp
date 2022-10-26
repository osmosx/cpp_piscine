#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		Cat	&operator=(const Cat &other);
		~Cat(void);
	public:
		void	makeSound(void) const;
};

#endif
