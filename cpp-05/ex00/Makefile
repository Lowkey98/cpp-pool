CC = c++
SRC =   main.cpp Bureaucrat.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Bureaucrat

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) 

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
