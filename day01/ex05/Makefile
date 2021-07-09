
all:
	$(CC) $(FLAGS) $(SRCS) -o karen
clean:
	rm karen


CC = clang++
FLAGS = -Wall -Wextra -Werror
NAME = karen

SRCS = main.cpp \
	Karen.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = -I .

all : $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) -o $(NAME)

%.o : %.cpp Karen.hpp
	$(CC) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
