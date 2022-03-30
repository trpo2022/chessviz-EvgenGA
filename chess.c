#include <stdio.h>
#include "startpos.h"
//l ladya	h horse		ys slon
//q queen	k king		p peshka
int main()
{
	char A[9][9] = {0};
	startsort(A);

	for(int j = 0; j < 9; j++)
	{
		for(int i = 0; i < 9; i++)
		{
			printf("%3c", A[i][j]);
		}
		printf("\n");
	}

	return 0;
}
