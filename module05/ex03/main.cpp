#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Intern	intern;
	Form	*f;

	f = intern.makeForm("shrubbery creation", "28C");
	std::cout << *f << std::endl;
	delete f;

	f = intern.makeForm("robotomy request", "28B");
	std::cout << *f << std::endl;
	delete f;

	f = intern.makeForm("presidential pardon", "28A");
	std::cout << *f << std::endl;
	delete f;

	f = intern.makeForm("undefined", "0U");

	return (0);
}
