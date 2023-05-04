NAME = btc

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	BitcoinExchange.cpp \
		main.cpp 

CC = c++

OBJ = ${SRC:%.cpp=%.o}

%.o: %.cpp
	$(CC) -c $< -o $@ -g $(FLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	

re: fclean all

.PHONY: all clean fclean re