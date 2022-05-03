#include <stdio.h>
#include <ctype.h>
#include <string.h>
int position(int a, int b)
{
	if((a >= 1 && a <= 8) && (b >= 1 && b <= 8))
		return 1;
	return 0;
}

void chessgame(char A[][9])
{
	printf("\n" "Small piece first move\n" "\n");
	char ch, B[8] = {};
	int a, b, i = 0;
	fgets(B, sizeof(B), stdin);

	if(isupper(B[0]))
	{
		i++;
	}

	a = B[i] - 96;
	b = B[i+1] - 48;

	if(position(a, b))
	{
		if(i == 1 && B[0] == toupper(A[a][b]))
		{
			printf("The chess is true\n");
			ch = A[a][b];
		}
		else
		{
			if(A[a][b] != ' ')
			{
				printf("This chess is '%c'\n", A[a][b]);
				ch = A[a][b];
			}
			else
				printf("No find chess\n");
		}
		printf("%c\n", ch);
	}
	else
		printf("Error position\n");
}
