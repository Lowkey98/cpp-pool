CC = c++
SRC =   main.cpp 
FLAGS = -Wall -Wextra -Werror
NAME =  Array

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
