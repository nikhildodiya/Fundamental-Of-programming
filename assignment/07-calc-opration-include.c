// WAP To Make Simple Calculater Using Switch Case

#include<stdio.h>
int main()
{
    int calc;
    int no1, no2;

    printf("\n1.addition\n2.substraction\n3.multiplication\n4.division\n5.Modulo");

    printf("\nEnter Your Choice : ");
    scanf("%d", &calc);

    printf("\nEnter Your No1 : ");
    scanf("%d", &no1);

    printf("\nEnter Your No2 : ");
    scanf("%d", &no2);

    switch (calc)
    {
        case 1:
        printf("\naddition is : %d", no1 + no2);
        break;

        case 2:
        printf("\nsubstraction is : %d", no1 - no2);
        break;
        
        case 3:
        printf("\nmultiplication Is : %d", no1 * no2);
        break;

        case 4:
        printf("\ndivision Is : %f", (float)no1 / (float)no2);
        break;
               
        case 5:
        printf("\nModulo Is : %d", no1 % no2);
        break;

        default:
        printf("\n Your Choice Is Wrong");
        break; 
    }
        return 0; 
}