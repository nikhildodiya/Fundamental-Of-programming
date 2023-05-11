//WAP To Swap Tow Numbers Without third variable
#include<stdio.h>
int main()
{
    int a, b; // Variable To Store Value

    // Pass The Msg To Take user's Input
    printf("Enter Value Of a : ");
    scanf("%d", &a);
    printf("Enter Value Of b : ");
    scanf("%d", &b);

    a = a - b;
    b = a + b;
    a = b - a;
    
    // Display Two Number
    printf("\nAfter Swaping a = %d\n", a);
    printf("After Swaping b = %d", b);

    return 0;

}