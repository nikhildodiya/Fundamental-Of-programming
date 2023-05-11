//WAp To Find Simple Interest

#include<stdio.h>
int main() // Main Method
{
    int principle, rate, time, interest; // Variable To Store Value
    
    // Pass The Msg To Take User Intput
    printf("Enter The principle : ");
    scanf("%d", &principle);

    printf("Enter The rate : ");
    scanf("%d", &rate);

    printf("Enter The time : ");
    scanf("%d", &time);

    interest = principle * rate * time / 100;
    printf("\nthe simple interest is : %d", interest);
    return 0;
}