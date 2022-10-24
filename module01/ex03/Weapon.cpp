#include <iostream>
#include "Weapon.hpp"

void	Weapon::setType(std::string type){
	_type = type;}

std::string Weapon::getType(void) const{
	return (_type);}

Weapon::Weapon(std::string type)
		: _type(type){
	return ;}

Weapon::~Weapon(){
	return ;}