#include <stdio.h>
#include <string.h>
int main(){
	FILE *f;
	FILE *f1;
	char var;
	f= fopen("basic.c","r");
	f1= fopen("text2.txt","w");
	while(1){
		var=fgetc(f);
		if(var==EOF)
			break;
		fputc(var,f1);
	}
	fclose(f);
	fclose(f1);
	return 0;
}