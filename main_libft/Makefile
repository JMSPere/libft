CC=gcc
CFLAGS= -Wall -Wextra -Werror -I.
NAME = program
DEPS = libft.h Makefile
SRC = main.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c
OBJ = ${SRC:.c=.o}
SRC_BONUS = ft_substr_bonus.c
OBJ_BONUS = ${SRC_BONUS:.c=.o}

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

${NAME}: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) -lbsd

.PHONY: all clean fclean lib re

all:	${NAME}

lib:
	ar -rcs libft.a *.o

clean:
	rm -f ${OBJ}
	rm -f ${OBJ_BONUS}
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

bonus: ${OBJ_BONUS} ${OBJ}
	$(CC) -o ${NAME} ${OBJ_BONUS} ${OBJ} $(CFLAGS)
