#include <stdio.h>
//l- ladya	h- horse	s- slon
//q- queen	k- king		p- peshka
int main()
{
	char A[8][8];
	int i,j;
        for(i = 0; i < 8; i++)
        {
                for(j = 0; j < 8; j++)
                {
                        if((j == 0) || (j == 7))
                        {
                                if((i == 0) || (i == 7)) A[i][j] = 'l';
                                if((i == 1) || (i == 6)) A[i][j] = 'h';
                                if((i == 2) || (i == 5)) A[i][j] = 's';
                                if(i == 3) A[i][j] = 'q';
                                if(i == 4) A[i][j] = 'k';
                        }
                        else    if((j == 1) || (j == 6)) A[i][j] = 'p';
                        else
                            	A[i][j] = ' ';
                }
        }

	for(j = 0; j < 8; j++)
	{
		for(i = 0; i < 8; i++)
			printf("%c ", A[i][j]);
		printf("\n");
	}
	return 0;
}
