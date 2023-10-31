// Accept monthly salary from the user and deduct 10% insurance
// premium , 10% loan installment find out of remaining salary.

#include<stdio.h>

int main() // main function
{
    int salary, premium, leftsalary, installment, deduct; // Variable

    // Input User's Monthly Salary
    printf("Enter Monthly Salary: ");
    scanf("%d", &salary);

    premium = salary * 10 / 100; // Find Premium
    installment = salary * 10 / 100; // Find Installment Amount
    leftsalary = salary - premium - installment;  // Find Left Salary
    deduct = premium + installment; // Deduction

    // print Deduction And Left Salary
    printf("Deducted Amount is %d\n", deduct);
    printf("Left Salary After Deduction OF Insurance And Loan Installment: %d", leftsalary);  
}