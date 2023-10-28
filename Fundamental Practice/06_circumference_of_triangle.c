//○ Find circumference of Triangle formula

#include<stdio.h>

int main() // Main Fuction
{
    int a,b,c,tri; // Variable For Store The Value

    // Takes User's Input
    printf("Enter Side OF A, B And C : ");
    scanf("%d%d%d", &a,&b,&c);

    tri = a + b + c; // Formula For Find circumference of Triangle formula

    // Takes User's Output
    printf("circumference of Triangle Is = %d", tri);
}