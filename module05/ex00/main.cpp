#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Armenia("Armenia", 15);
	Bureaucrat	Russia("Russia", 140);
	Bureaucrat	India("India", 1);

	std::cout << Armenia << std::endl;
	std::cout << Russia << std::endl;
	std::cout << India << std::endl;

	try
	{
		Bureaucrat	Iran("Iran", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	Iraq("Iraq", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Armenia.increment();
		Russia.decrement();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << Armenia << std::endl;
	std::cout << Russia << std::endl;

	return (0);
}
