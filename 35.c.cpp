#include<stdio.h>
int main()
{
	FILE*fh;
	fh=fopen("shubha.txt","r");
	if(fh!= NULL)
	{
		char c;
		while((c=fgetc(fh))!=EOF)
		putchar(c);
		fclose(fh);
	}
	else
		printf("ERROR OPENING FILE\n");
	return 0;
}