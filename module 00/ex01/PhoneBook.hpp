#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "PhoneBook.hpp"
# include <iostream>
# include <string>
# include <sstream>

class phoneBook{
private:
	Contact Book[8];
	int i;
public:
	phoneBook();
	std::string	stringFormat(std::string str);
	void		printPhoneBook(void);
	void		printContactInformation(int n);
	int			getContactNbr(void);
	void		contact_n(void);
	void		add_contact(int i);
	void		search_contact(void);
};

#endif
