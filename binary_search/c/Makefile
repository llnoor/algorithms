CC=gcc -lm 
CFLAGS=-Wall -Wextra -Werror -std=c11

.PHONY: all clean

all: main

clean:
	rm -rf *.o $(S21_GREP)

main: main.o 
	$(CC) main.o -o main

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o
