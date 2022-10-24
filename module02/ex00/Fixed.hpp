#include <iostream>

class Fixed {
private:
	int	value;
	const static int bits = 8;

public:
	Fixed(void);
	Fixed(const Fixed& value);
	~Fixed(void);
	void	operator=(const Fixed &to_assign);
	void	setRawBits(const int raw);
	int		getRawBits(void) const;
};
