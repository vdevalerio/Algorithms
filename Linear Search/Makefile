CC=gcc
CFLAGS=-I.
DEPS=functions.h
OBJ=pseudo_linear_search.o functions.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pseudo_linear_search: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
