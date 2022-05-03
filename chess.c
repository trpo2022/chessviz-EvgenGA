#include <stdio.h>
#include "startpos.h"
#include "write.h"
#include "game.h"

int main()
{
	char A[9][9] = {0};

	startsort(A);
	putout(A);
	chessgame(A);

        printf("\n" "See you later!\n" "\n");
	return 0;
}
