NAME = libft.h
CC=gcc
CFLAGS= -Wall -Wextra -Werror -I.
DEPS = libft.h
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

program: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: all clean lib re

all:	program

lib:
	ar -rc libft.a *.o

clean:
	rm *.o program

re: clean all

