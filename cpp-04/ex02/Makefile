CC = c++
SRC =   main.cpp AAnimal.cpp  Dog.cpp \
		Cat.cpp  WrongAnimal.cpp \
		WrongCat.cpp  Brain.cpp 
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Brain

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
