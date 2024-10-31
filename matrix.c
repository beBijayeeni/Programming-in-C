#include <stdio.h>
int main()
{
 int matrix[10][10];
 int i,j,r,c;
 
 printf("Enter number of Rows :");
 scanf("%d",&r);
 printf("Enter number of Cols :");
 scanf("%d",&c);
 printf("\nEnter matrix elements :\n");
 for(i=0;i< r;i++)
 {
 for(j=0;j< c;j++)
 {
 printf("Enter element [%d,%d] : ",i,j);
 scanf("%d",&matrix[i][j]);
 }
 }
 printf("\nMatrix is :\n");
 for(i=0;i< r;i++)
 {
 for(j=0;j< c;j++)
 {
 printf("%d\t",matrix[i][j]);
 }
 printf("\n"); /*new line after row elements*/
 }
 return 0; 
}
