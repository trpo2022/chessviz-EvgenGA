all: chess

chess: chess.c
	gcc -Wall -Werror -o chess chess.c startpos.h

clean:
	rm chess

run:
	./chess
