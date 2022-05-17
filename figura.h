int Rook(char* A[], int a, int b, int c, int d)
{
	return 0;
}
int kNight(char* A[], int a, int b, int c, int d)
{
	if(a + 2 == c || a - 2 == c)
		if(b + 1 == d || b - 1 == d)
			return 1;
	if(a + 1 == c || a - 1 == c)
		if(b + 2 == d || b - 2 == d)
			return 1;
	return 0;
}
int Bishop(char* A[], int a, int b, int c, int d)
{

}
int Queen(char* A[], int a, int b, int c, int d)
{
	if(Rook(A, a, b, c, d))
		return 1;
	if(Bishop(A, a, b, c, d))
		return 1;
	return 0;
}
int King(char* A[], int a, int b, int c, int d)
{
	if(a + 1 == c || a - 1 == c || a == c)
		if(b + 1 = d || b - 1 == d || b == d)
			return 1;
	return 0;
}
int Peshka(char* A[], int a, int b, int c, int d)
{
	return 0;
}

