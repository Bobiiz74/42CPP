NAME =     		crazyform
CC =			c++
CFLAGS =		-Wall -Wextra -Werror -std=c++98 
RM =			rm -f

SRCS =			main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp	RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS =			$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) target_shruberry

re: fclean all

.PHONY: all clean fclean re