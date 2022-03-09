CC = c++
SRC = Contact.cpp  Contact.hpp PhoneBook.cpp PhoneBook.hpp main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
