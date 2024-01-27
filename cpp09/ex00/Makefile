NAME = btc

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

CPP = c++

SRC = main.cpp BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
