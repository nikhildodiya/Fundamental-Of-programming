// Wap To Summation of given number
#include<stdio.h>  
int main()  // Main Method  
{    
      int n, m, sum = 0; // Variable For Store The Value  
      
      // pass The Msg For Take The User's Input
      printf("Enter a number:");    
      scanf("%d",&n);    

while(n>0)  // Condition For Summation For Given NUmber  
     {    
        m = n % 10;    
        sum = sum + m;    
        n = n / 10;    
     }    
   printf("Sum is = %d", sum);    
   return 0;  
}