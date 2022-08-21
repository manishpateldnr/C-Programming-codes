#include<stdio.h>
int main()
{
	int ram,shyam,ajay,age;
	printf("Enter the age of ram :");
	scanf("%d",&ram);
	printf("Enter the age of shyam :");
	scanf("%d",&shyam);
	printf("Enter the age of ajay :");
	scanf("%d",&ajay);
	if(ram>shyam && ram>ajay)
		printf("ram is young");
	else if(shyam>ajay && shyam>ram)
			printf("shyam is young");
	else
			printf("ajay is young");
			
	
	return 0;
}