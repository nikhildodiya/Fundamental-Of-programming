//WAP To Convert years into days and days into years....

#include<stdio.h>
int main() // Main Method
{
    int choice, days, years; // Variable For Store Value

    // Pass The Mss For Choice
    printf("\nPress 1 For To Convert Years into Days : ");
    printf("\nPress 2 For To Convert Days into years : ");
    
    printf("\n Enter Your Choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("\nGiven Year Convert Into Days : ");
        scanf("%d", &years);
        days = years * 365;
        printf("\nYour Days Is : %d", days);
        break;

        case 2:
        printf("\nGiven Days Convert Into Years : ");
        scanf("%d", &days);
        years = days / 365;
        printf("\nYour Years Is : %d", years);
        break;


        default:
        printf("\ninvalid Input");
        break;
    }
}