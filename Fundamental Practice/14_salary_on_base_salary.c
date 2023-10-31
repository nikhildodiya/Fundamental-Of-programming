#include <stdio.h>

int main() {
    double salary; // Variable
    double premium; // Variable

    // Takes User's Input
    printf("Enter your annual salary: ");
    scanf("%lf", &salary);

    // Find User's Premium
    if (salary < 30000) 
    {
        premium = 0.1 * salary;  // Premium is 10% of salary
    } else if (salary >= 30000 && salary < 50000) {
        premium = 0.15 * salary;  // Premium is 15% of salary
    } else {
        premium = 0.2 * salary;  // Premium is 20% of salary
    }

    // Print User's Premium
    printf("Your insurance premium is: %.2f\n", premium);

    return 0;
}