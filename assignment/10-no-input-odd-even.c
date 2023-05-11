//Wap To find sum of even and odd numbers and also find how many even and odd number is there from given input number from user

#include<stdio.h>
int main() // Main Method
{
    int a[10], i, j, choice, sum = 0; // Variable To Store the value


    for(i = 0; i < 10; i++) 
        {
           printf("Enter Your Number : ");
           scanf("%d", &a[i]);
        }
  
    // printf("%d", a);
    
 // printf("\npress 1 for odd\nPress 2 for even\nPress 3 for odd sum\npress 4 for even sum : ");
    printf("\npress 1 for Sum Of Even Number\nPress 2 for sum Of Odd Number");

    printf("\nEnter Your Choice : "); // For Users Choice
    scanf("%d", &choice);

    switch(choice) // Use For To apply Condition
        {  
          case 1:
          for(j = 0; j < 10; j++)
          {
              if(a[j] % 2 == 0)
              {
                  printf("%d ", a[j]);
                  sum = sum + a[j];
              }
          } 
          printf("\nSum Of Your Even Number : %d", sum);    
          break;

          case 2:
          for(j = 0; j < 10; j++)
          {
              if(a[j] % 2 == 1)
              {
                  printf("%d ", a[j]);
                  sum = sum + a[j];
              }
          }
          default:
          printf("\nSorry.... Invalid Choice....");
          break;
        }
    return 0;
}