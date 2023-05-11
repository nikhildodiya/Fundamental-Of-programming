#include<stdio.h>
int main()
{
    int choice, choice1;

    printf("\n1.dosa\n2.sandwich\n3.maggi\n4.punjabi sabji");

    printf("\nEnter your choice from menu : ");
    scanf("%d", &choice);
        
    switch (choice)
    {
        case 1:
            printf("\npress 1 for Paper Dhosa...");
            printf("\npress 2 for masala Dhosa...");
            printf("\nEnter your choice of Dhosa :");
            scanf("%d", &choice1);
            
            switch (choice1)
        {                 
            case 1:
                printf("\n1. your paper dosa is being preparing in 15 minutes..", choice1);   
                break; 
            case 2:
                printf("\n2.masala dosa dosa is being preparing in 15 minutes..", choice1);
                break;  
        }
        default:
               printf("\n Wrong input given choice is not available");
               break;
    }
} 