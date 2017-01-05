#include <stdio.h>
#include "sum.h"
#include "subtract.h"

int main(int argc , char *argv[])
{
	unsigned long kq;
	kq=sum_function(30,10);
	printf("kq: %ld \n",kq);
	kq=sub_function(30,10);
	printf("kq:%ld \n",kq);
	
	return 0;
} 
