// Wap to find max from given number
#include<stdio.h>
int main()
{
    int no,min = 0,max = 0, i;

    printf("\nEnter Your number : ");
    scanf("%d", &no);
    
    max=no;
    min=no;

    while (no!=0)
    {
        if (no > max)
        {
            max=no;
            /* code */
        }
        if (no < min)
        {
            min = no ;
            /* code */
        }

        no != 10;        
    }

    printf("min %d", min);
    printf("max %d", max);
    return 0;

}