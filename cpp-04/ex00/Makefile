CC = c++
SRC =   main.cpp Animal.cpp Animal.hpp Dog.cpp Dog.hpp Cat.cpp Cat.hpp WrongAnimal.cpp WrongAnimal.hpp WrongCat.cpp WrongCat.hpp
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
