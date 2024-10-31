#include <stdio.h>
int main()
{
 int matrix[10][10];
 int i,j,r,c,f=0;
 
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
 for(i=0;i<r;i++){
 	for(j=0;j<c;j++){
 		if(i==j && matrix[i][j]!=1){
 			f=1;
 			break;
		}
		else if(i!=j && matrix[i][j]!=0){
 			f=1;
 			break;
		}
	 }
 }
 if(f==0){
 	printf("Identity Matrix");
 }
 else{
 	printf("Not");
 }
 return 0; 
}
