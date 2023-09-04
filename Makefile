NAME =	grademe

CXX = c++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

SRCS =	*.cpp\

OBJS =	$(SRCS:.cpp=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:
			$(RM) $(OBJS) grademe

re	:	fclean
		make all

.PHONY	:	all clean fclean re