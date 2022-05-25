#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "figura.h"
int chessis(char A[][9], int a, int b, int c, int d)
{
	int s = 0;
	switch(tolower(A[a][b]))
	{
		case 'r':
			s = Rook(A, a, b, c, d);
			break;
		case 'n':
			s = kNight(A, a, b, c, d);
			break;
		case 'b':
			s = Bishop(A, a, b, c, d);
			break;
		case 'q':
			s = Queen(A, a, b, c, d);
			break;
		case 'k':
			s = King(A, a, b, c, d);
			break;
	}
	if(s == 1)
		return 1;
	return 0;
}
int position(int a, int b)
{
	if((a >= 1 && a <= 8) && (b >= 1 && b <= 8))
		return 1;
	return 0;
}

int chessgame(char A[][9], int s)
{
	char ch, B[8] = {};
	int a, b, c, d, i;
	fgets(B, sizeof(B), stdin);
	if(B[0] == 'q') return 2;

	i = 0;

	if(isupper(B[0]))
	{
		i = 1;
	}

	a = B[i] - 96;
	b = B[i+1] - 48;

	if(position(a, b) && ((s == 0 && isupper(A[a][b])) || (s == 1 && islower(A[a][b]))))
	{
		if(i == 1 && B[0] == toupper(A[a][b]))
		{
			ch = A[a][b];
		}
		else
		{
			if(A[a][b] != ' ')
			{
				printf("This chess is '%c'\n", A[a][b]);
				ch = A[a][b];
			}
			else	printf("No find chess\n");
		}
		A[a][b] = ' ';
	}
	else
	{
		printf("Wrong move\n");
		return 0;
	}

	i += 3;
	c = B[i] - 96;
	d = B[i+1] - 48;

	if(position(c, d))
	{
		if(a == c && b == d)
			return 0;

		if(B[i-1] == '-' && A[c][d] == ' ')
		{
			if(chessis(A, a, b, c, d))
				A[c][d] = ch;
			else
			{
				if(Peshka(A, a, b, c, d, s))
					A[c][d] = ch;
				else
				{
					printf("it don`t this move\n");
					return 0;
				}
			}
		}
		else if(B[i-1] == 'x' && A[c][d] != ' ')
		{
			if((isupper(ch) && islower(A[c][d])) || (isupper(A[c][d]) && islower(ch)))
			{
				if(chessis(A, a, b, c, d))
					A[c][d] = ch;
				else
				{
					if(Peshkax(A, a, b, c, d, s))
						A[c][d] = ch;
					else
					{
						printf("it don`t this move\n");
						return 0;
					}
				}
			}
		}
		else
		{
			printf("Error move\n");
			return 0;
		}
	}
	else
	{
		printf("%c %c\n", B[i], B[i+1]);
		printf("This position unexist\n");
		A[c][d] = ch;
		return 0;
	}
	if(B[i+3] == '#')	return 2;

	//else move is true
	return 1;
}
