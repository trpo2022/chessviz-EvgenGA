int line(char A[][9], int a, int b, int d)
{
        while(d < b)
        {
                if(A[a][d] != ' ')
                        return 0;
                d++;
        }
        return 1;
}

int Rook(char A[][9], int a, int b, int c, int d)
{
	int s;
	if(a == c)
	{
		if(d < b)
			s = line(A, a, b, d);
		if(b < d)
			s = line(A, a, d, b);
	return s;
	}
	if(b == d)
	{
		if(c < a)
			s = line(A, b, a, c);
		if(a < c)
			s = line(A, b, c, a);
	return s;
	}
	return 0;
}

int kNight(char A[][9], int a, int b, int c, int d)
{
	if(a + 2 == c || a - 2 == c)
		if(b + 1 == d || b - 1 == d)
			return 1;
	if(a + 1 == c || a - 1 == c)
		if(b + 2 == d || b - 2 == d)
			return 1;
	return 0;
}

int diagonal(char A[][9], int a, int b, int c, int d)
{
        int x = 1, y = 1;

        do
        {
                if(A[c+x][d+y] != ' ')
                        return 0;
                if(c + x < a)
                        x++;
                if(d + y < b)
                        y++;

        }while(c + x != a || d + y != b);
        if(x == y)
                return 1;
        return 0;
}

int Bishop(char A[][9], int a, int b, int c, int d)
{
	int s;
	if(a > c)
	{
		if(b > d)
			s = diagonal(A, a, b, c, d);
		if(d > b)
			s = diagonal(A, a, d, c, b);
		return s;
	}
	if(a < c)
	{
		if(b > d)
			s = diagonal(A, c, b, a, d);
		if(d > b)
                       	s = diagonal(A, c, d, a, b);
		return s;
	}
	return 0;
}

int Queen(char A[][9], int a, int b, int c, int d)
{
	if(Rook(A, a, b, c, d))
		return 1;
	if(Bishop(A, a, b, c, d))
		return 1;
	return 0;
}

int King(char A[][9], int a, int b, int c, int d)
{
	if(a + 1 == c || a - 1 == c || a == c)
		if(b + 1 == d || b - 1 == d || b == d)
			return 1;
	return 0;
}

int Peshka(char A[][9], int a, int b, int c, int d, int s)
{
	return 1;
}

int Peshkax(char A[][9], int a, int b, int c, int d, int s)
{
	return 1;
}
