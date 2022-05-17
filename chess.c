#include <stdio.h>
#include "startpos.h"
#include "write.h"
#include "game.h"

int main()
{
	printf("Hello, Player. This game is the chess\n");
	char A[9][9] = {0};
	int x, s = 0; //0-white, 1-black
	startsort(A);
	putout(A);
	while(1)
	{
		if(s % 2 == 0)
			printf("\n" "Move white(Hight chess)\n");
		else
			printf("\n" "Move black(Lower chess)\n");

		x = chessgame(A, s%2);
		if(x == 2)	break;
		if(x == 1)
		{
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			putout(A);
			s++;
		}
		else	printf("The move isn`t correct. Please, try again.\n");
	}
	printf("%d\n", s);
        printf("\n" "See you later!\n" "\n");
	return 0;
}
