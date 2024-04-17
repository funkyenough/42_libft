SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_strtrim.c ft_tolower.c ft_toupper.c

SRCS = ${addprefix ${PRE}, ${SRC}}
OBJS = ${SRCS:.c=.o}
PRE = ./
HEAD = .libft.h
NAME = libft.a
AR = ar rc
LIB = ranlib
CC = cc
RM = rm
CFLAGS = -Wall -Wextra -Werror


all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME}

re: fclean all

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}