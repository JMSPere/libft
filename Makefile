CC=gcc
CFLAGS= -Wall -Wextra -Werror -I.  
NAME = libft.a
DEPS = libft.h
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_tolower.c ft_toupper.c
OBJ = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_strchr.o ft_strrchr.o ft_strlen.o ft_tolower.o ft_toupper.o
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
	
