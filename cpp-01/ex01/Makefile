CC = c++
SRC = Zombie.cpp main.cpp zombieHorde.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombieHord

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
