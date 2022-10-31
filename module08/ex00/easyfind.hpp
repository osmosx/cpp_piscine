#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template<typename T>
typename T::iterator	easyfind(T &container, int val)
{
	typename T::iterator	i;

	i = std::find(container.begin(), container.end(), val);
	if (i != container.end())
		return (i);
	else
		throw std::out_of_range("Exception: the value does not found!");
}

#endif
