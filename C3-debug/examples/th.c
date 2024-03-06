#include <pthread.h>
#include <unistd.h>
#include <stdio.h>


/*
 * Section critique:
 *
 * TH1     TH2
 *
 * L
 * *        L
 * *        L
 * U        L
 *          *
 *          *
 *          *
 *          U
 *
 */

static pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER; 

void * th_func(void *p)
{
	int * i = (int*) p;

	while(1)
	{

		pthread_mutex_lock(&lock);
		printf("Val is %d\n", *i);
		pthread_mutex_unlock(&lock);
		sleep(1);
	}
}



int main(int argc, char ** argv)
{
	int i = 9;

	pthread_t th;
	pthread_create(&th, NULL, th_func, &i); 

	int k;
	for(k = 0 ; k < 100; k++)
	{
		pthread_mutex_lock(&lock);
		i++;
		pthread_mutex_unlock(&lock);
		sleep(1);
	}

	pthread_join(th, NULL);

	return 0;
}
