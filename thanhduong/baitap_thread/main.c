#include <stdio.h>
#include <pthread.h>

void* printx(void* unused)
{
	while(1)
	{
		/* ham xu ly cua luong in ky tu x*/
		fputc('x', stdout);
	}
	return NULL;
}

int main(int argc, char const *argv[])
{
	pthread_t thread_id;
	/* tao luong */
	pthread_create(&thread_id, NULL, &printx, NULL);
	while(1)
	{
		/* luong chinh lien tuc in ra ky tu o*/
		fputc('o',stdout);
	}
	return 0;
}