
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = war

SRCS = main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = -I .

all : $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) -o $(NAME)

%.o : %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
