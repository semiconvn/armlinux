#include <stdio.h> 
#include <pthread.h> 
#include <semaphore.h> 
#include <stdlib.h> 

#define TRUE 1 
#define FALSE 0 

char n[1024]; 
pthread_mutex_t lock= PTHREAD_MUTEX_INITIALIZER;
int string_write=FALSE; 
int string_read=FALSE; 
int a,b,c;
pthread_cond_t cond;

void * read1()
{
	while(1)
	{
		while(!string_write)
		{
			string_write=TRUE;
			while(string_read);
			pthread_mutex_lock(&lock);
			printf("Nhap so a: ");
			scanf("%s",n);
			a = atoi(n);
			printf("Nhap so b: ");
			scanf("%s",n);
			b = atoi(n);
			string_read=TRUE;
			pthread_mutex_unlock(&lock);
			pthread_cond_signal(&cond);
		}
		pthread_mutex_lock(&lock);
		pthread_cond_wait(&cond,&lock);
		printf("Tinh tong: %d\n",c);
		pthread_mutex_unlock(&lock);
		string_write=FALSE;
	}
} 

void * write1() 
{ 
	while(1)
	{ 
		pthread_mutex_lock(&lock); 
		while(!string_read) 
		pthread_cond_wait(&cond,&lock);
		c = a+b;
		//printf("Tinh tong: %d\n",c); 

		string_read=FALSE;
		pthread_mutex_unlock(&lock);
		pthread_cond_signal(&cond);
		string_write=TRUE;
	} 
}

int main() 
{
	int status;
	pthread_t tr, tw;

	pthread_create(&tr,NULL,read1,NULL);
	pthread_create(&tw,NULL,write1,NULL);

	pthread_join(tr,NULL);
	pthread_join(tw,NULL);
	return 0;
}