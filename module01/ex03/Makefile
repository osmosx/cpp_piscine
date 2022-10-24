NAME = unnecessary_violence

HEADER = HumanA.hpp Weapon.hpp HumanB.hpp
SRC = main.cpp  Weapon.cpp  HumanA.cpp  HumanB.cpp
OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADER) Makefile
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m[${NAME} compiled]"

%.o:%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@echo "\033[0;31m[${NAME} clean]"

fclean: clean
	@$(RM) $(NAME)

re: fclean all
