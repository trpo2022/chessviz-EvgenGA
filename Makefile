all: chess

chess.o: chess.c
	gcc -Wall -Werror -c chess.c
chess: chess.o
	gcc chess.o -o chess

clean:
	rm chess

run:
	./chess
