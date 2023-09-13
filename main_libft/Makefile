CC=gcc
CFLAGS= -Wall -Wextra -Werror -I.
NAME = program
DEPS = libft.h
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))
SRC_BONUS = $(wildcard *.c)
OBJ_BONUS = ${SRC_BONUS:.c=.o}

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

${NAME}: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: all clean fclean lib re

all:	${NAME}

lib:
	ar -rc libft.a *.o

clean:
	rm -f ${OBJ}
	rm -f ${OBJ_BONUS}

fclean: clean
	rm -f ${NAME}

re: fclean all

bonus: ${OBJ_BONUS} ${OBJ}
	$(CC) -c -o ${NAME} ${OBJ_BONUS} ${OBJ}
