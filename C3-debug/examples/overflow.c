#include <stdio.h>


/*
 * LOL: X
 *      X
 *      X
 *      X
 *BuFF: 0
 *      1
 *      .
 *      7
 *      PILE DESCEND
 */

int main(int argc, char ** argv)
{
	int lol = 0;
	char buff[8];

	scanf("%s", buff);


	printf("BUFF %p   BUFF + 9 : %p LOL : %p OFF : %d\n", buff, buff + 8, &lol, (char*)&lol - buff);

	int i;

	for(i = 0 ; i  < 10; i++)
	{
		printf("buff[%d] = %p\n", i, buff + i);
	}
	printf("LOL = %d\n", lol);
	printf("LOL2 = %d\n", *((int*)(buff + 8)));


	return 0;
}
