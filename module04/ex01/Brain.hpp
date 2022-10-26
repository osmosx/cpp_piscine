#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include "Colors.hpp"

class	Brain
{
	public:
		Brain(void);
		Brain(const Brain &other);
		Brain				&operator=(const Brain &other);
		~Brain(void);
	public:
		void				setIdea(const std::string &str);
		const std::string	&getIdea(int index) const;
	private:
		int					size;
		std::string			_ideas[100];
};

#endif
