// WAP To Find Even Or Odd Number

#include<stdio.h>
int main() // Main Method
{
    int no; // Variable To Store The Value
    printf("Enter an number:");
    scanf("%d", &no);

   (no % 2 == 0) ? (printf("num is even.", no)) : (printf("num is odd.", no));
    return 0;
}      