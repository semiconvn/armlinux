#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
#include "sub.h"

int main(int argc, char *argv[])
{
	unsigned long kq;
	kq = sum_fun(30, 10);
	printf("kq: %ld\n", kq);
	kq = sub_fun(30, 10);
	printf("kq: %ld\n", kq);

	return(0);
}
