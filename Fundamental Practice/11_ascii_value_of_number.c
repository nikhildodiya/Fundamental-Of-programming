//Find ascii value of given number

#include <stdio.h>

int main() 
{
    int no;

    // Input the number for which you want to find the ASCII value
    printf("Enter a number: ");
    scanf("%d", &no);

    // Use printf to find the ASCII value
    printf("ASCII value of %d is: %c", no, no);

    return 0;
}