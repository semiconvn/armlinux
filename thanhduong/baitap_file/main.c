#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	FILE *f;
	char c[255];
	int i=0;
	printf("Nhap chuoi vao: \n");
	scanf("%s",c);
	/* neu chua co file data.txt thi bao loi */
	if((f=fopen("data.txt","w"))==NULL)
		printf("Loi! Khong the mo tap tin.\n");
	else
	{
		/* chuyen chuoi thuong sang Hoa */
		while(c[i]!='\0')
		{
			if(c[i]>'a'&&c[i]<='z')
			{
				c[i]=c[i]-32;
			}
			i++;
		}

		/* ghi chuoi vao file */
		fputs(c,f);
		/* dong file lai */
		fclose(f);
	}
		return 0;
}
