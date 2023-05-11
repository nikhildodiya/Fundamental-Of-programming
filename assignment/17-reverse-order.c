//WAP To Print Number In Reverse Order

#include <stdio.h>
int main() // Main Method 
{
   int n, reverse = 0, reminder; //Variable to store the value

   // Pass The msg to take user's input
   printf("Enter Your Number :");
   scanf("%d", &n); 

   while(n != 0) // calculating reverse number to given number
   {  
  
      reminder = n%10;
      reverse = reverse*10+reminder;
      n/=10;
   }

      printf("reversed number : %d", reverse);   
      return 0;
}
