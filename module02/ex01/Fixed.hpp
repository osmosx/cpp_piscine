#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int	value;
	const static int bits = 8;

public:
	Fixed(void);
	Fixed(const Fixed& value);
	Fixed(const int &value);
	Fixed(const float &value);
	~Fixed(void);
	void			operator=(const Fixed &to_assign);
	void			setRawBits(const int raw);
	int				getRawBits(void) const;
	int				toInt(void) const;
	float			toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &to_output);

#endif //FIXED_HPP
