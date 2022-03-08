CC = c++
SRC = megaphone.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
