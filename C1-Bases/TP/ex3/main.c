


#include <stdio.h>
#include "morpion.h"


int main(int argc, char ** argv)
{
	struct morpion m;

	char buff[512];


	morpion_init(&m);



	while(1)
	{
		fgets(buff, 512, stdin);

		printf("%s", buff);


		morpion_set(&m, 2,1, 'X');

		morpion_display(&m);

	}

	return 0;
}
