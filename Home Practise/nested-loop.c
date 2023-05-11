#include<stdio.h>
int main()
{
    int i, j, k;
    
    for(i = 1; i <= 5; i++) // row
    {
      for(j = 5; j > i; j--) // left side space
      {
         printf(" ");
      }
      for(k = 1; k <= i; k++) // middle & right space
      {
         printf("%d ", i);
      }
         printf("\n"); 
    }
      return 0;
}