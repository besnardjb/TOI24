#include <omp.h>
#include <stdio.h>

// Compiler avec -fopenmp

int main(int argc, char ** argv)
{
	int tab[32] = {0};

	#pragma omp parallel
	{
		int id = omp_get_thread_num();
		int count = omp_get_num_threads();
	
		int i;

		#pragma omp for
		for(i = 0 ; i < 32; i++)
		{
			tab[i]++;
			printf("Loop %d\n", i);
		}



		printf("TH %d / %d\n", id, count);
	}

}
