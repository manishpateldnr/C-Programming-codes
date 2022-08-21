#include <stdio.h>
#include <string.h>

int fact(int);

int main()
{
	int a,r,b;
	printf("operation no. \n1-find factorial\n2-check prime\n3-check armstrong\n4-strong\n5-stop\n\nenter operation no. : ");
	scanf("%d",&a);
	while(a!=5){
		printf("Enter the number : ");
		scanf("%d",&b);
		switch(a){
			case 1:
				r=fact(b);
				printf("Factorial of %d = %d",b,r);
		}
		printf("\nenter operation no. : ");
		scanf("%d",&a);
	}
	return 0;
}

int fact(int x){
	int i,k=1;
	for(i=1;i<=x;i++)
	{
		k=k*i;
	}
	return k;
}