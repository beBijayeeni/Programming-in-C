#include<stdio.h>
int main()
{
	register int a;
	printf("Value of a: %d\n",a);
	//printf("Address of a: %d\n",&a);//[Error] address of register variable 'a' requested
}
