#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template	<typename T>
class		Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &rhs);
		Array			&operator=(const Array &rhs);
		~Array();
	public:
		T				&operator[](unsigned int i) const;
		unsigned int	size() const;
	private:
		T				*_arr;
		unsigned int	_size;
};

#endif
