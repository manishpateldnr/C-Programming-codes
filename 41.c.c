//WAP 
#include <stdio.h>
#include <string.h>
void swap(int*,int*);

int main(){
	int a,b;
	printf("Enter two number",b);
	scanf("%d %d",&a,&b);
	printf("Before swap value of a=%d , b=%d\n",a,b);
	swap(&a,&b);
	printf("After swap origanal value of a=%d , b=%d\n",a,b);
	return 0;
}

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;	
}
