
CC = clang++
FLAGS = -Wall -Wextra -Werror
NAME = crapphy

SRCS= crapphy.cpp \
	crapphy.class.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = -I .

all : $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) -o $(NAME)

%.o : %.c crapphy.class.hpp
	$(CC) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
