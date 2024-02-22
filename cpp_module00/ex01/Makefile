NAME = phonebook

FLAGS =  -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC		= phonebook.cpp main.cpp contact.cpp

OBJS	= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) :	$(OBJS)
			c++ $(FLAGS) $(OBJS) -o $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: al clean fclean re