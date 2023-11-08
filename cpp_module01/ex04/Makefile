NAME = replacefile

FLAGS =  -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC		= replaceFile.cpp main.cpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp
	c++ $(FLAGS) -c $< -o $@

$(NAME) :	$(OBJS)
			c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: al clean fclean re