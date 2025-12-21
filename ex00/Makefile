FILES = main.cpp ClapTrap.cpp 

OBJS = $(FILES:.cpp=.o)

CC = c++

NAME = ClapTrap

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CC) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CPP_FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all