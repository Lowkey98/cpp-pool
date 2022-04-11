CC = c++
SRC =  main.cpp ClapTrap.cpp  ScavTrap.cpp FragTrap.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = FragTrap

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
