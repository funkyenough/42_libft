CC = CC
CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = $(wildcard *.c)

all = $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all