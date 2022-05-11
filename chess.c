#include <stdio.h>
#include "startpos.h"
#include "write.h"
#include "game.h"

int main()
{
	char A[9][9] = {0};
	int s = 0; //0-white, 1-black
	startsort(A);
	putout(A);
	while(s == 10)
	{
		if(s % 2 == 0)
			printf("Move white\n");
		else	printf("Move black\n");

		if(chessgame(A, s%=2) == 1)
		{
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			putout(A);
			s++;
		}
		else	printf("The move isn`t correct. Please, try again.\n");
	}

        printf("\n" "See you later!\n" "\n");
	return 0;
}
