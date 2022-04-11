CC = c++
SRC =   main.cpp Animal.cpp  Dog.cpp  Cat.cpp  WrongAnimal.cpp  WrongCat.cpp 
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = animal

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
