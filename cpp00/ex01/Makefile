NAME = phoneBook

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

SRC = Contact.cpp PhoneBook.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) $(CXXFLAGS) -o $(NAME)

clean:
	rm  -rf $(OBJ)

fclean: clean
	rm -rf  $(NAME)

re: fclean all
