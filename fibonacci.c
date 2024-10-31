#include<stdio.h>
int fibonacci(int);
int main()
{
	int n,f,i;
	printf("Enter the number upto how much d0 you want to print?\n");
	scanf("%d",&n);
	f=fibonacci(n);
	printf("The Fibonacci Series:\n");
	for(i=0; i<n; i++){
		printf("%d\t",fibonacci(i));
	}
}
int fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
