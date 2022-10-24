#include "Contact.hpp"

std::string Contact::getFirstName(void){return(firstName);}
std::string Contact::getLastName(void){return(lastName);}
std::string Contact::getNickName(void){return(nickName);}
std::string Contact::getPhoneNumber(void){return(phoneNumber);}
std::string Contact::getDarkestSecret(void){return(darkestSecret);}

void Contact::setFirstName(std::string str){firstName = str;}
void Contact::setLastName(std::string str){lastName = str;}
void Contact::setNickName(std::string str){nickName = str;}
void Contact::setPhoneNumber(std::string str){phoneNumber = str;}
void Contact::setDarkestSecret(std::string str){darkestSecret = str;}