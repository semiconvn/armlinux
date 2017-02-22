#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	FILE *f;
	char c[100];
	int i=0;
	printf("Nhap vao mang!\n");
	scanf("%s",c);
	if((f=fopen("data.txt","w"))==NULL)
		printf("khong the mo tap tin!\n");
	else
	{
		while(c[i]!='\0')
		{
			if(c[i]>'a'&&c[i]<='z')
			{
				c[i]=c[i]-32;
			}
			i++;
		}

		fputs(c,f);
		fclose(f);
	}
		return 0;
}