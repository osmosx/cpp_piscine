#include <iostream>

int main (int ac, char **av)
{
	(void)av;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; av[i] != NULL; i++){
			std::string str = av[i];
			for (size_t i = 0; i < str.length(); i++)
				str[i] = std::toupper(str[i]);
			std::cout << str;
		}
		std::cout << "\n";
	}
}