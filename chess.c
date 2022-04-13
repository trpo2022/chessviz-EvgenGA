#include <stdio.h>
#include <string.h>
#include "startpos.h"
#include "write.h"

//R Rook	n kNight	b Bishop
//q Queen	k King		p Peshka
int main()
{
	char A[9][9] = {0};
	startsort(A);
	putout(A);
	return 0;
}
