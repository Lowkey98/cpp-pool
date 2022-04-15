CC = c++
SRC =  main.cpp Base.cpp
FLAGS = -Wall -Wextra -Werror
NAME = Base

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
