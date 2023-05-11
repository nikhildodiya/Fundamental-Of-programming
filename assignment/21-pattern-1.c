//Wap To Print Pattern
/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1 */

#include<stdio.h>
int main() // Main Method
{
    
    int i,j; // Variable to store the value
    
    for(i = 1;i< = 5; i++) // Row
    {
        for(j = 1; j <= i; j++) // column
        {
            printf("%d ", j%2);
        }
        printf("\n");
    }

    return 0;
}
