#include<stdio.h>
int main()
{
	int marks[2][4]={{45,234,2,3},
	                  {3,2,3,3}};
	int i,j;
	/*for (i=0;i<4;i++){
		printf("Enter the marks of Roll No. %d\n",i+1);
		scanf("%d",&marks[i]);
	}*/
	for (i=0;i<2;i++){
		for(j=0;j<4;j++)
		{
			printf("%d\t",marks[i][j]);
		}
		printf("\n");
		//printf("The marks of Roll No. %d: %d\n",i+1,marks[i]);
	}
	/*marks[0]=34;
	printf("Marks of Roll No. 1 is %d\n",marks[0]);
	marks[0]=4;
	marks[1]=24;
	marks[2]=34;
	marks[3]=44;
	printf("Marks of Roll No. 1 is %d\n",marks[0]);*/
	return 0;
}
