.PHONY: all clean

all: in_c

clean:
	rm -rf *.o

in_c: main.o 
	gcc -Wall -Wextra -Werror -std=c11 -o main main.o 
