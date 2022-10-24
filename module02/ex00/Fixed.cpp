#ifndef FIXED_HPP
#define FIXED_HPP

#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& value){
	std::cout << "Copy constructor called" << std::endl;
	this->value = value.getRawBits();
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::operator=(const Fixed &to_assign){
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = to_assign.getRawBits();
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(const int raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

#endif //FIXED_HPP
