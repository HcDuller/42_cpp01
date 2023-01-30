NAME = sifl

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp \
		sedIsForLoosers.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rfd $(NAME)
	rm -rfd *.replace
	rm -rfd *.diff

fclean: clean
	rm -rfd $(OBJ)

re: fclean all