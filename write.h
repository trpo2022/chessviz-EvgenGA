#include <stdio.h>
void putout(char A[][9])
{
        for(int j = 0; j < 9; j++)
        {
                for(int i = 0; i < 9; i++)
                {
                        printf("%3c", A[i][j]);
                }
                printf("\n");
        }
}
