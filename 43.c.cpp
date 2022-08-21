#include<stdio.h>
int main()
{
	int mark[2][3];
	int i;
	printf("Enter 5 integer : ");
	for(i=0; i<5; i++){
	scanf("%d",&mark[i]);}
	

printf("Display integer\n");
for(i=0; i<5; i++)
{
	printf("%d+",mark[i]);
}
}