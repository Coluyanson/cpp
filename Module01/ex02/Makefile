
NAME := thisIsBrain

SRCS := main.cpp

OBJS := $(SRCS:.cpp=.o)

CC := c++

CFLAGS := -Wall -Werror -Wextra

STD := -std=c++98

INC :=

RM := rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@ $(CC) $(CFLAGS) $(STD) $(OBJS) -o $(NAME)

%.o: %.cpp $(INC)
	@ $(CC) $(CFLAGS) $(STD) -c -o $@ $<

clean:
	@ $(RM) $(OBJS)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
	
