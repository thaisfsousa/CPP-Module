NAME	= btc

SRCS	= 	main.cpp BitcoinExchange.cpp

OBJS	=  $(SRCS:.cpp=.o)

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

$(NAME):	$(OBJS)
			c++ $(CPPFLAGS) $(SRCS) -o $(NAME)
			@echo  "\n \033[38;5;198m $(NAME) compiled \n \033[0;m"


all:		$(NAME)

valgrind:	all
			valgrind --leak-check=full --show-reachable=yes --show-leak-kinds=all --error-limit=no  \
			--gen-suppressions=all --log-file=lib.log ./$(NAME)

clean:	
			@rm -f $(OBJS)
			@rm -rf ./$(NAME).dSYM
			@echo "\n \033[0;32m $(NAME) cleaned \n \033[0;m"

fclean:		clean
			@rm -f $(NAME)


re:			fclean all
				@echo "\n \033[0;34m $(NAME) Cleaned and rebuilt \n \033[0;m"

.PHONY:		all clean fclean re