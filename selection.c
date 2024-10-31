#include<stdio.h>      
void main ()    
{    
    int i, j,temp,min,n=5;     
    int a[5] = { 10, 35, 32, 13, 26};       
    printf("Before sorting array elements are - \n");  
    for(i=0;i<n;i++)
     printf("%d\t",a[i]);
   	for(i = 1; i < n-1; i++)    
    {	
    	min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
				min=j;	
		} 
		temp=a[i];
		a[i]=a[min];
		a[min]=temp; 
    } 
    printf("\nAfter sorting array elements are - \n");    
    for(i=0;i<n;i++)
    	printf("%d\t",a[i]);  
}    
