#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template	<typename T>
void	print(T &x) {
	std::cout << x << std::endl;
}

template	<typename T>
void	iter(const T *arr, size_t len, void (*func)(const T &)) {
	for (size_t i = 0; i < len; ++i)
		func(arr[i]);
}

#endif
