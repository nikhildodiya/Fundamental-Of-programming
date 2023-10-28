//Find character value from ascii

#include<stdio.h>

int main() // Main Function
{
    char c; // Variable To Store The Valur

    // Takes User's Input
    printf("Enter Any Character: ");
    scanf("%c", &c);

    // Takes Uers's Output
    printf("Ascii Value Of %c = %d", c, c);
    return 0;
}