#include "Data.hpp"

Data::Data()
{
	_i = 0;
}

Data::Data(const Data &other)
{
	_i = other._i;
}

Data	&Data::operator=(const Data &other)
{
	if (this != &other)
		_i = other._i;
	return (*this);
}

Data::~Data()
{
}
