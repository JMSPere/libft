CC=gcc
CFLAGS=-I.
DEPS = libft.h
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

program: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean lib

lib:
	ar -rc libft.a *.o

clean:
	rm *.o program
