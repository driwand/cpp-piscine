
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = bureaucrat

SRCS= Bureaucrat.cpp main.cpp Form.cpp \
	ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS = $(SRCS:.cpp=.o)

HEADERS = -I .

all : $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
