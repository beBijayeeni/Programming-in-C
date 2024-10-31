#include<stdio.h>      
void main ()    
{    
    int i, j,key,n;     
	printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
   	for(i = 1; i < n; i++)    
    {
		key = a[i];
		j=i-1;
		while(j>=0 && a[j]>key) 
		{
			a[j+1]=a[j];
			j--;
		} 
		a[j+1]=key;  
    }  
    printf("\nAfter sorting array elements are - \n");    
    for(i=0;i<n;i++)
    	printf("%d\t",a[i]);  
}    
