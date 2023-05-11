//WAP to find sum of first and last digit of a number

#include <stdio.h>
int main()
{
    int num, sum=0, firstDigit, lastDigit;

    //pass The msg toInput a number from user
    printf("Enter any number : ");
    scanf("%d", &num);
    
    lastDigit = num % 10;
    firstDigit = num;

    // Find the first digit by dividing num by 10 until first digit is left
    
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;

    sum = firstDigit + lastDigit; 

    printf("Sum of first and last digit = %d", sum);

    return 0;
}