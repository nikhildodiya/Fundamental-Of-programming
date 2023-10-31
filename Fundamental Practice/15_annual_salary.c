// ○ Calculate person’s Annual salary

#include<stdio.h>

int main() // Main Function
{
    int annual, monthly; // Variable To Store Value

    // input user's Monthly Salary
    printf("Enter Monthly Salary: ");
    scanf("%d", &monthly);

    // Find user's Annual Salary
    annual = monthly * 12;

    // print User's Annual Salary
    printf("Annual Salary Is %d", annual);
}