//WAp To Check if The Given Year Is A Leap Year Or Not

#include<stdio.h>
int main() // Main Method
{
    int year; // Variable For Store The Value
    
    // Pass The Msg To Take The User Input
    printf("Enter Your Year:");
    scanf("%d", &year);

    // Condition 
   (year % 2 == 0) ? (printf("Your Given Year Is Leap Year", year)) : (printf("Your Given Year Is Not Leap Year", year));
    return 0;
}      