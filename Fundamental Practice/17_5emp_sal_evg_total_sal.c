#include <stdio.h>

int main() 
{
    int numEmployees = 5, i;
    char names[numEmployees][50];  // Array to store employee names
    double salaries[numEmployees], totalSalary, averageSalary; // Array to store employee salaries

    // Input employee names and salaries
    for (int i = 0; i < numEmployees; i++) {
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%lf", &salaries[i]);
    }

    // Calculate the total and average salary
    totalSalary = 0.0;
    for (i = 0; i < numEmployees; i++) 
    {
        totalSalary += salaries[i];
    }
    averageSalary = totalSalary / numEmployees;

    // Display the results
    printf("\nEmployee Information:\n");
    for (i = 0; i < numEmployees; i++) 
    {
        printf("Employee %d: Name: %s, Salary: %.2lf\n", i + 1, names[i], salaries[i]);
    }
    printf("Total Salary: %.2lf\n", totalSalary);
    printf("Average Salary: %.2lf\n", averageSalary);

    return 0;
}
