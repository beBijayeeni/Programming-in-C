#include <stdio.h>
int main()
{
 int matrix[10][10];
 int i,j,n;
 
 printf("Enter number of Rows and Columns:");
 scanf("%d",&n);
 printf("\nEnter matrix elements :\n");
 for(i=0;i< n;i++)
 {
 for(j=0;j< n;j++)
 {
 printf("Enter element [%d,%d] : ",i,j);
 scanf("%d",&matrix[i][j]);
 }
 }
 printf("\nMatrix is :\n");
 for(i=0;i< n;i++)
 {
 for(j=0;j< n;j++)
 {
 printf("%d\t",matrix[i][j]);
 }
 printf("\n"); /*new line after row elements*/
 }
 printf("\nRight diagonal elements are :\n");
 for(i=0;i<=n;i++){
 	for(j=0;j<n;j++){
 		if(i+j==n-1){
 			printf("%d\t",matrix[i][j]);
		 }
	 }
 }
 return 0; 
}
