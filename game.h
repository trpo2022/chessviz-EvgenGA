#include <stdio.h>
#include <ctype.h>
#include <string.h>
//r Rook        n kNight        b Bishop
//q Queen       k King          p Peshka

int position(int a, int b)
{
	if((a >= 1 && a <= 8) && (b >= 1 && b <= 8))
		return 1;
	return 0;
}

int chessgame(char A[][9], int s)
{
	char ch, B[8] = {};
	int a, b, i;
	fgets(B, sizeof(B), stdin);
	if(B[0] == 'q') return 2;

	i = 0;

	if(isupper(B[0]))
	{
		i = 1;
	}

	a = B[i] - 96;
	b = B[i+1] - 48;

	if(position(a, b) &&(isupper(A[a][b]) >= s || islower(A[a][b]) >= s))
	{
//r Rook        n kNight        b Bishop
//q Queen       k King          p Peshka

		switch(tolower(ch))
		{
			case(r):
//				Rook();
			case(q):
//				Queen(); //Boshop + Rook
			case(n):
//				kNight();
			case(k):
//				King();
			case(b):
//				Bishop();
			case(p):
//				Peshka();
		}
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

	a = B[i] - 96;
	b = B[i+1] - 48;

	if(position(a, b))
	{
		//there need make test on tipe chess

		if(B[i-1] == '-' && A[a][b] == ' ')
		{
			A[a][b] = ch;
		}
		else if(B[i-1] == 'x' && A[a][b] != ' ')
		{
			if((isupper(ch) && islower(A[a][b])) || (isupper(A[a][b]) && islower(ch)))
				A[a][b] = ch;
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
		a = B[i - 3] - 96;
		b = B[i - 2] - 48;
		A[a][b] = ch;
		return 0;
	}
	if(B[i+3] == '#')	return 2;

	//else move is true
	return 1;
}
