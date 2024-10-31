#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter the number upto how much do you want to sum?\n");
	scanf("%d",&n);
	int result=sum(n);
	printf("The Sum Series of Natural Numbers:\n");
	printf("%d\t",result);
}
int sum(int n)
{
	if(n>0)
	{
		return n+sum(n-1);
	}
	else
	{
		return 0;
	}
}
