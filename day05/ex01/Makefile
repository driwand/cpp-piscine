
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = bureaucrat

SRCS= Bureaucrat.cpp main.cpp Form.cpp
OBJS = $(SRCS:.cpp=.o)

HEADERS = -I .

all : $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp Form.hpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
