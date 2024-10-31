#include<stdio.h>
void swap(int *a, int *b);
int main()
{
	int a=10, b=15;
	printf("Before Swap: a=%d, b=%d",a,b);
	swap(&a,&b);
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	printf("\nAfter Swap: a=%d, b=%d",*a,*b);
}
