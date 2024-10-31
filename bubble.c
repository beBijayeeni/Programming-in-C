#include<stdio.h>      
void main ()    
{    
    int i, j, temp, n;     
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }       
    printf("Before sorting array elements are - \n");  
    for(i=0;i<n;i++)
     printf("%d\t",a[i]);
   	for(i = 0; i < n-1; i++)    
    {    
      for(j = 0; j < n-i-1; j++)    
        {    
            if(a[j] > a[j+1])    
            {    
                temp = a[j];    
                a[j] = a[j+1];    
                a[j+1] = temp;     
            }     
        }     
    }  
    printf("\nAfter sorting array elements are - \n");    
    for(i=0;i<n;i++)
    	printf("%d\t",a[i]);  
}    
