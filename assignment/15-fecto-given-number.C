//Wap To Find Fectorial of given number
#include<stdio.h>  
int main() // main Method   
{    
 
 int i, fecto = 1, number; // Variable to store the value    
 
    
    // Pass The Msg to take users input
    printf("Enter a number: ");    
    scanf("%d",&number);    
    
    for ( i = 1; i <= number; i++)
    {    
      fecto = fecto * i;    
    }    
  
    printf("Factorial of %d is: %d",number,fecto);    
    return 0;  
}   