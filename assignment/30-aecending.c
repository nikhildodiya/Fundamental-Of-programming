// Take two array input from user and sort them ascending and descending order as per users choice

#include <stdio.h>
int main()
{
    
    int a[2];
    int temp;
    int i, j,k;  
    
   for(i=0; i<2; i++)
    {
        scanf("%d", &a[i]);
    }

    
     printf("Before Sorting ");
    
    for(i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }
    
    for(i=0; i<6; i++)
    {
        for(j=i+1; j<6; j++) 
        { if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
     printf("\nAfter Sorting ");
    for(i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}