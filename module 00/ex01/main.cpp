#include <iostream>
#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	std::string	input;
	phoneBook	Book;

	(void)argv;
	if (argc != 1)
	{
		std::cout << "\033[31;1mDoesn't accept arguments\033[0m" << std::endl;
		return (1);
	}
	while (1)
	{
		std::cout << "PhoneBook > ";
		input.clear();
		while (input.length() == 0)
		{
			std::getline(std::cin, input);
			if(input.empty())
			{
				std::cout << "---------------------------------------------" << std::endl;
				std::cout << "|             Incorrect entry               |" << std::endl;
				std::cout << "---------------------------------------------" << std::endl;
				std::cout << "|     Add a contact : ADD (maximum 8)       |" << std::endl;
				std::cout << "|     See your list of contact : SEARCH     |" << std::endl;
				std::cout << "|     Exit the PhoneBook : EXIT             |" << std::endl;
				std::cout << "---------------------------------------------" << std::endl;
				std::cout << "PhoneBook > ";
			}
		}
		if (input.compare("EXIT") == 0)
			return (0);
		else if (input.compare("ADD") == 0)
		{
			Book.add_contact(Book.getContactNbr());
			Book.contact_n();
		}
		else if (input.compare("SEARCH") == 0)
			Book.search_contact();
		else {
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|             Incorrect entry               |" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|     Add a contact : ADD (maximum 8)       |" << std::endl;
			std::cout << "|     See your list of contact : SEARCH     |" << std::endl;
			std::cout << "|     Exit the PhoneBook : EXIT             |" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
		}
	}
}