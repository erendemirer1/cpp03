CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ClapTrap
SRCS = ClapTrap.cpp main.cpp

all: $(NAME)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)
clean:
	rm -f $(SRCS:.cpp=.o)
fclean: clean
	rm -f $(NAME)
re: clean all