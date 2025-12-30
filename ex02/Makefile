FILES = main.cpp ClapTrap.cpp FragTrap.cpp

OBJS = $(FILES:.cpp=.o)

CC = c++

NAME = FragTrap

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all: $(NAME)

%.o: %.cpp ClapTrap.hpp FragTrap.hpp
	$(CC) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all