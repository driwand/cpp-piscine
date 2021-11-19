
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = ClapTrap

SRCS= ClapTrap.cpp \
	main.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = -I .

all : $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) -o $(NAME)

%.o : %.cpp ClapTrap.hpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
