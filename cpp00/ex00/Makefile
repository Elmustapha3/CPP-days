NAME = megaphone

CXXFLAGS = -Wall -Wextra -Werror 

CXX = c++

OBJ = megaphone.o

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm  -rf $(NAME)

re: fclean all
