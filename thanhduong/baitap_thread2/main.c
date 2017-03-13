#include <stdio.h>
#include <pthread.h>

void* thread1(void* unused)
{
	while(1)
	{
		/* ham xu ly cua luong in ky tu x*/
		printf("Hello!!\n"); 
	}
}

void* thread2(void* unused)
{
	while(1)
	{
		/* ham xu ly cua luong in ky tu x*/
		printf("How are you?\n"); 
	}
}

int main(int argc, char const *argv[])
{
	int status;
	pthread_t id1, id2;
	/* tao luong */
	pthread_create(&id1,NULL,thread1,NULL); 
    pthread_create(&id2,NULL,thread2,NULL); 
    pthread_join(id1,NULL); 
    pthread_join(id2,NULL);
	return 0;
}