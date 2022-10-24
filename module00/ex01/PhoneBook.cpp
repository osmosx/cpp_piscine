#include <iostream>
#include "PhoneBook.hpp"

void	phoneBook::add_contact(int i)
{
	std::string	str;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|          Creation of new contact          |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     First Name : ";
	while (str.length() == 0) {
		std::getline(std::cin, str);
		if(str.empty())
		{
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|  Incorrect! Please enter First Name       |" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|     First Name : ";
		}
	}
	Book[i].setFirstName(str);
	str.clear();
	std::cout << "|      Last Name : ";
	while (str.length() == 0){
		std::getline(std::cin, str);
		if(str.empty())
		{
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|  Incorrect! Please enter Last Name        |" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|      Last Name : ";
		}
	}
	Book[i].setLastName(str);
	str.clear();
	std::cout << "|       Nickname : ";
	while (str.length() == 0){
		std::getline(std::cin, str);
		if(str.empty())
		{
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|  Incorrect! Please enter Nickname         |" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|       Nickname : ";
		}
	}
	Book[i].setNickName(str);
	str.clear();
	std::cout << "|   Phone Number : ";
	while (str.length() == 0){
		std::getline(std::cin, str);
		if(str.empty())
		{
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|  Incorrect! Please enter Phone Number     |" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|   Phone Number : ";
		}
	}
	Book[i].setPhoneNumber(str);
	str.clear();
	std::cout << "| Darkest Secret : ";
	while (str.length() == 0){
		std::getline(std::cin, str);
		if(str.empty())
		{
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|  Incorrect! Please enter Darkest Secret   |" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "| Darkest Secret : ";
		}
	}
	Book[i].setDarkestSecret(str);
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|           Contact creation over           |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

std::string	phoneBook::stringFormat(std::string str)
{
	if (str.length() > 10) {
		str.resize(9);
		str.append(".");
	}
	else {
		while (str.length() != 10)
			str.insert(0, " ");
	}
	return (str);
}

void phoneBook::printPhoneBook(void){

	int n = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|                 Phonebook                 |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (n < 8) {
		if (Book[n].getFirstName().empty())
			break ;
		std::cout << "|         ";
		std::cout << n + 1;
		std::cout << "|";
		std::cout << stringFormat(Book[n].getFirstName());
		std::cout << "|";
		std::cout << stringFormat(Book[n].getLastName());
		std::cout << "|";
		std::cout << stringFormat(Book[n].getNickName());
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		n++;
	}
}

void	phoneBook::printContactInformation(int n)
{
	if (Book[n - 1].getFirstName().empty())
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|             Incorrect entry               |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	else
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|             Contact number ";
		std::cout << n;
		std::cout << "              |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "| First Name : ";
		std::cout << Book[n - 1].getFirstName() << std::endl;
		std::cout << "| Last Name : ";
		std::cout << Book[n - 1].getLastName() << std::endl;
		std::cout << "| Nickname : ";
		std::cout << Book[n - 1].getNickName() << std::endl;
		std::cout << "| Phone Number : ";
		std::cout << Book[n - 1].getPhoneNumber() << std::endl;
		std::cout << "| Darkest Secret : ";
		std:: cout << Book[n - 1].getDarkestSecret() << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
}

void	phoneBook::search_contact(void)
{
	std::string	str;
	int			n;

	if (getContactNbr() == 0 && Book[0].getFirstName().empty())
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|        Please add a contact first         |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	else
	{
		printPhoneBook();
		str.clear();
		std::cout << "Contact's index : ";
		while (str.length() == 0)
		{
			std::getline(std::cin, str);
			std::stringstream(str) >> n;
			if (str.compare("EXIT") == 0)
				return ;
			if (n >= 1 && n <= 8 && n <= getContactNbr())
				printContactInformation(n);
			else
			{
				std::cout << "---------------------------------------------" << std::endl;
				std::cout << "|             Incorrect entry               |" << std::endl;
				std::cout << "         There is ";
				std::cout << getContactNbr();
				std::cout << " contact in memory         " << std::endl;
				std::cout << "---------------------------------------------" << std::endl;
				str.clear();
				std::cout << "Contact's index : ";
			}

		}

	}
}

void	phoneBook::contact_n(void)
{
	i++;
	if (i > 7)
		i = 0;
}

int		phoneBook::getContactNbr(void)
{
	return (i);
}

phoneBook::phoneBook(void)
{
	i = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|                 PhoneBook                 |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Add a contact : ADD (maximum 8)       |" << std::endl;
	std::cout << "|     See your list of contact : SEARCH     |" << std::endl;
	std::cout << "|     Exit the PhoneBook : EXIT             |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}