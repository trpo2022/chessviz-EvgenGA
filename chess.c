#include <stdio.h>
//l ladya	h horse		ys slon
//q queen	k king		p peshka
int main()
{
	char A[9][9] = {0};
	int i,j, a = 97;
	int h = 104, k = 107, l = 108, p = 112, q = 113, s = 115;
	A[0][0] = ' ';
	for(i = 1; i < 9; i++)
	{
		A[i][0] = a;
		a++;
	}
	a = 49;
	for(j = 1; j < 9; j++)
	{
		A[0][j] = a;
		a++;
	}
        for(i = 1; i < 9; i++)
        {
                for(j = 1; j < 9; j++)
                {
			A[i][j] = ' ';
                        if((j == 1) || (j == 8))
                        {
                                if((i == 1) || (i == 8)) A[i][j] = l;
                                if((i == 2) || (i == 7)) A[i][j] = h;
                                if((i == 3) || (i == 6)) A[i][j] = s;
                                if(i == 4) A[i][j] = q;
                                if(i == 5) A[i][j] = k;
                        }
                        if((j == 2) || (j == 7))
			A[i][j] = p;
                }
        }
	for(i = 1; i < 9; i++)
	{
		A[i][1] = A[i][1] - 32;
		A[i][2] = A[i][2] - 32;
	}

	for(j = 0; j < 9; j++)
	{
		for(i = 0; i < 9; i++)
		{
			printf("%3c", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
