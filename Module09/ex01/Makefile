
NAME	:=	RPN

SRCS	:=	main.cpp \
			RPN.cpp \

OBJS	:=	$(SRCS:.cpp=.o)

HEADERS	:=	RPN.hpp \

#Compiler
CC		:=	c++
CFLAGS	:=	-Wall -Werror -Wextra
STD		:=	-std=c++98

RM		:=	rm -rf

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) $(STD) $< -c

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(STD) $(OBJS) -o $@
	@echo "\033[32mCompiled ✅"

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re