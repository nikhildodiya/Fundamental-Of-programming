//Wap To Print Pattern

/*
a
b c 
d e f
g h i j
k l m n O
*/

#include <stdio.h>
int main() // Main Method
{
    
   int i, j, k=1, n; // Variable For Store The Value

    for(i = 1; i <= 5; i++) // Codition For Row
    {
        for(j = 1; j <= i; j ++, k++) // Condition For Column
        {
            printf("%4c", (char)(k+64));   //4 spaces
        }
        printf("\n");
    }
    return 0;
}
