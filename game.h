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
		A[a][b] = ' ';
	}
	else
	{
		printf("Error position\n");
		return;
	}

	i += 3;

	a = B[i] - 96;
	b = B[i+1] - 48;

	if(position(a, b))
	{
		//there need make test on tipe chess

		if(B[i-1] == '-' && A[a][b] == ' ')
		{
			A[a][b] = ch;
		}
		if(B[i-1] == 'x' && A[a][b] != ' ')
		{
			if((isupper(ch) && islower(A[a][b])) || (isupper(A[a][b]) && islower(ch)))
				A[a][b] = ch;
		}
	}
	else
	{
		printf("%c %c\n", B[i], B[i+1]);
		printf("This position unexist\n");
		return;
	}
}
