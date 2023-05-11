#include<stdio.h>
int main()
{
    int no;
    printf("Enter an integer:");
    scanf("%d", &no);

    if (no % 2 == 0) 
      printf("num is even.", no);
    else
      printf("num is odd.", no);
      return 0;
}      