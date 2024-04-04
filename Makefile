CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all = $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all