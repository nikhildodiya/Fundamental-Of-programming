// WAP To Take User Age And check He/she Elligble For Vote Or not without Conditional statement

#include<stdio.h>
int main()
{
    int age;
    printf("enter your age is:");
    scanf("%d", &age);

    (age >= 18) ? (printf("\n You are elligible for vote")) : (printf("\nYou are note elligible for vote"));
}