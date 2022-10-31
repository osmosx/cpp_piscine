#include "Array.hpp"

template	<typename T>
Array<T>::Array() : _arr(0), _size(0){}

template	<typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n){}

template	<typename T>
Array<T>::Array(const Array &rhs) : _arr(0), _size(rhs._size) {
	if (_size != 0) {
		_arr = new T[_size];
		for	(unsigned int i = 0; i < rhs._size; ++i)
			this->_arr[i] = rhs._arr[i];
	}
}

template	<typename T>
Array<T>::~Array() {
	delete [] this->_arr;
}

template	<typename T>
Array<T>	&Array<T>::operator=(const Array &rhs) {
	if (this != &rhs) {
		if (this->_size > 0)
			delete [] this->_arr;

		this->_size = rhs._size;
		this->_arr = new T[_size];
		for (unsigned int i = 0; i < rhs._size; ++i)
			this->_arr[i] = rhs._arr[i];
	}
	return (*this);
}

template	<typename T>
T			&Array<T>::operator[](unsigned int idx) const {
	if (idx >= this->_size)
		throw std::range_error("Index out of bounds");
	return (this->_arr[idx]);
}

template		<typename T>
unsigned int	Array<T>::size() const {
	return (this->_size);
}