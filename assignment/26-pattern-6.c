// Wap to print pattern
/*
A
A B
A B C
A B C D
A B C D E
*/

#include <stdio.h>

int main() {
   
   int i, j, n;
    
    for(i = 1; i <= 5; i++)
    {
        for( j=1; j<= i; j++)
        {
            printf("%c ",(char)(j+64));
        }
 
        printf("\n");
    }
        return 0;
}
