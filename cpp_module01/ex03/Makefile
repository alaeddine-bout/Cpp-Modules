NAME = zombie

FLAGS =  -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC		= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp 

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