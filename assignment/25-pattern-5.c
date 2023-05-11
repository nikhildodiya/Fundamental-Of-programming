// WAP To Print Pattern
/*
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>
int main() // Main Method 
{
   
    int i, j, k; // Variable To store the value
    k = 1;
    
    for(i = 1; i < 5; i++) // row
    {
        for(j = 1; j <= i; j++) // column
        {
            printf("%d ", k++);
        }
            printf("\n");
    }
        return 0;
}
