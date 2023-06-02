// WAP To Make Simple Calculater Using Switch Case

#include<stdio.h>
           
        int calc; // Variable To Store The Value
        int no1, no2;
int add(int no1, int no2) // Using Function For addition
{
            printf("\naddition is : %d", no1 + no2);
            return 0;
}

int sub(int no1, int no2) // Using Function For Substraction
{
            printf("\nsubstraction is : %d", no1 - no2);
            return 0;
}

int mul(int no1, int no2) // Using function For Multiplication
{
            printf("\nmultiplication Is : %d", no1 * no2);
            return 0;
}

int div(float no1, float no2) // Using Function For Division
{
            printf("\ndivision Is : %f", (float)no1 / (float)no2);
            return 0;
}

int main() // Main Function
{
    printf("\n-----------------Menu----------------\n\n");

    // Choice
    printf("\n1 addition\n2 substraction\n3 multiplication\n4 .division\n");

    
    // Pass The Msg To Take User's Input
    printf("\nEnter Your No1 : ");
    scanf("%d", &no1);

    printf("Enter Your No2 : ");
    scanf("%d", &no2);

    // Pass The Msg To Take Users Choice
    printf("\nEnter Your Choice : ");
    scanf("%d", &calc);

    switch (calc) // Using Switch Case
    {
        case 1:
        add(no1, no2);
        break;

        case 2:
        sub(no1, no2);
        break;
        
        case 3:
        mul(no1, no2);
        break;

        case 4:
        div(no1, no2);
        break;
               
        default:
        printf("\n Your Choice Is Wrong");
        break; 
    }
        return 0; 
}
