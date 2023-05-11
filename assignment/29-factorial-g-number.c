//Wap To Print Factorial Of Given Number
#include<stdio.h>
int fecto(int no) // recursion
{
    if (no <= 1)
    {
        return 1;
    }
    return no * fecto(no-1);
}
int main()
{
    int no;
    printf("\nEnter Your Number : ");
    scanf("%d", &no);

    printf("factorial is : %d", fecto(no));
    return 0;
}