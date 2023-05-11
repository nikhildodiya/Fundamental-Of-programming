//Wap To Print pattern
/*  
        *
      * * *
    * * * * *  
  * * * * * * * 
* * * * * * * * *
*/

#include <stdio.h>
int main() 
{
   
      int i, j, k = 0; // Variable For store the value 
      
    for ( i =1; i <= 5; i++)
    {  
        for ( j = 1; j <= 5 - i; j++) 
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* ");  
        }  
        printf ("\n");  
    }  
}
