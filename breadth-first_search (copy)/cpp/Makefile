.PHONY: all clean

all: main

clean:
	rm -rf *.o

main: main.o 
	g++ -Wall -Wextra -Werror -std=c++11 main.cpp -o main 
