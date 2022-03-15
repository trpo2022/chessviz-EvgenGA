all: chess

chess: chess.c
	gcc -Wall -Werror -o chess.o chess.c

clean:
	rm chess.o

run:
	./chess.o
