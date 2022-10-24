#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
public:
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickName(void);
	std::string getPhoneNumber(void);
	std::string getDarkestSecret(void);

	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickName(std::string str);
	void setPhoneNumber(std::string str);
	void setDarkestSecret(std::string str);
};

#endif //CONTACT_HPP
