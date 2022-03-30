CC = c++
SRC =  main.cpp ClapTrap.cpp ClapTrap.hpp ScavTrap.cpp ScavTrap.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = a.out

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) 

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
