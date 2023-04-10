CC=gcc
CFLAGS=-I.
DEPS=functions.h
OBJ=insertion_sort.o functions.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

insertion_sort: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
