#include<stdio.h>
int main()
{
    int days;

    printf("\n1.Monday\n2.tuesday\n3.Wednesday\n4.thursday\n5.Friday\n6.Saturday\n7.Sunday\n");

    printf("\nEnter Your Day : ");
    scanf("%d", &days);
    
    switch(days)
    {
           case 1:
           printf("monday");
           break;
        
        case 2:
           printf("Tuesday");
           break; 
    
        case 3:
           printf("Wednesday");
           break;   
        
        case 4:
           printf("Thursday");
           break;
        
        case 5:
           printf("Friday");
           break;   
    
        case 6:
           printf("Saturday");
           break;
    
        case 7:
           printf("Sunday");
           break;
 
        default:
        printf("\nInvalid Input...");
        break;
    }
        return 0;   
}      