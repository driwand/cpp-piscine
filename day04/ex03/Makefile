
CC = clang++
# FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = inter

SRCS= main.cpp \
	AMateria.cpp \
	Ice.cpp \
	Cure.cpp \
	MateriaSource.cpp \
	Character.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = -I .

all : $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) -o $(NAME)

%.o : %.cpp AMateria.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
