#ifndef DATA_HPP
# define DATA_HPP

class	Data
{
	public:
		Data();
		Data(const Data &other);
		Data	&operator=(const Data &other);
		~Data();
	private:
		int		_i;
};

#endif
