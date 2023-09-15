CC=gcc
CFLAGS= -Wall -Wextra -Werror -I.  
NAME = libft.a
DEPS = libft.h Makefile
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
OBJ = ${SRC:.c=.o}
SRC_BONUS = ft_substr_bonus.c
OBJ_BONUS = ${SRC_BONUS:.c=.o}

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

${NAME}: $(OBJ)
	ar -rc $@ $^

.PHONY: all clean fclean re bonus

all:	${NAME}

clean:
	rm -f ${OBJ}
	rm -f ${OBJ_BONUS}

fclean: clean
	rm -f ${NAME}

re: fclean all

bonus: ${OBJ_BONUS} ${OBJ}
	ar -rc ${NAME} ${OBJ_BONUS} ${OBJ}	
