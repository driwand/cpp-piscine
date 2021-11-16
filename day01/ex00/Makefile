
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombies

SRCS = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = -I .

all : $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) -o $(NAME)

%.o : %.cpp Zombie.hpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
