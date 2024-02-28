


#include <stdio.h>
#include "morpion.h"


int main(int argc, char ** argv)
{
	struct morpion m;

	morpion_init(&m);

	morpion_set(&m, 2,1, 'X');

	morpion_display(&m);

	return 0;
}
