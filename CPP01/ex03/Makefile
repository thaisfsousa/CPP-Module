NAME	= Weapons

SRCS	= 	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS	=  $(SRCS:.cpp=.o)

CFLAGS	= -Wall -Wextra -Werror -g

$(NAME):	$(OBJS)
			c++ $(CFLAGS) $(SRCS) -o $(NAME)

all:		$(NAME)

valgrind:	all
			valgrind --leak-check=full --show-reachable=yes --show-leak-kinds=all --error-limit=no  \
			--gen-suppressions=all --log-file=lib.log ./$(NAME)

clean:	
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re