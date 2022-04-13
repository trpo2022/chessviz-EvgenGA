#include <stdio.h>
//r Rook        n kNight        b Bishop
//q Queen       k King          p Peshka
void startsort(char A[][9]);
void startsort(char A[][9])
{
        int i,j;
        int a = 97, n = 110, k = 107, r = 114, p = 112, q = 113, b = 98;
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
                                if((i == 1) || (i == 8)) A[i][j] = r;
                                if((i == 2) || (i == 7)) A[i][j] = n;
                                if((i == 3) || (i == 6)) A[i][j] = b;
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

}
