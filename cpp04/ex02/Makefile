NAME = poly

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

SRC = Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:fclean all
