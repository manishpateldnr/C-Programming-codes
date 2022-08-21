// factor ,prime ,armst,strong,stop ......................................
#include <stdio.h>
#include <string.h>

int fact(int);
void prime(int);
void armst(int);
void strong(int);

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
				break;
			case 2:
				prime(b);
				break;
			case 3:
				armst(b);
				break;
			case 4:
				strong(b);
				break;
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

void prime(int x){
	int i,flag=0;
	for(i=2;i<x;i++){
		if(x%i==0)
			flag=1;
		
	}
	if(flag==0)
		printf("%d is a prime number",x);
	else
		printf("%d is not a prime number",x);
	
}

void armst(int x){
	int y,sum=0;
	y=x;
	while(y!=0){
		sum+=(y%10)*(y%10)*(y%10);
		y=y/10;
	}
	if(sum==x)
		printf("%d is an armstrong number",x);
	else
		printf("%d is not an armstrong number",x);
		
}

void strong(int x){
	int y,sum=0;
	y=x;
	while(x>0){
		sum+=fact(y%10);
		y=y/10;
		if(y==0)
			break;
	}
	if(sum==x)
		printf("%d is a strong number",x);
	else
		printf("%d is not a strong number",x);
	
}
