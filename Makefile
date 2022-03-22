all: chess

chess: chess.c
	gcc -Wall -Werror -o chess.exe chess.c

clean:
	rm chess.exe

run:
	./chess.exe
