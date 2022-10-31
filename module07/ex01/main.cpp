#include "iter.hpp"

int	main()
{
	int		int_arr[] = {0, 1, 2, 3, 4, 5, 6};
	char	char_arr[] = "Hello 42";
	float 	float_arr[] = {42, 21.42, 0.0, -2.1, -42};

	std::cout << "----INT-----" << std::endl;
	iter(int_arr, 7, &print);
	std::cout << "----CHAR----" << std::endl;
	iter(char_arr, 8, &print);
	std::cout << "----FLOAT---" << std::endl;
	iter(float_arr, 5, &print);
	std::cout << "------------" << std::endl;

	return (0);
}
