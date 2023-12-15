NAME =	a.out

CXX = g++

CXXFLAGS = -std=c++17 -g

SRCS =	2.cpp\

OBJS =	$(SRCS:.cpp=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:
			$(RM) $(OBJS) a.out

re	:	fclean
		make all

.PHONY	:	all clean fclean re