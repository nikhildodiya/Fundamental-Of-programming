#include<stdio.h>
int main ()
{
  int a, b, convert;
  int years, days;
  
  printf ("\n year into Days : ");
  scanf ("%d", &a);

  printf("\n days into Years : ");
  scanf("%d", &b);

  switch (convert)
  {
    case 1:
    printf("\n your days is : %d", years = a * 365);
    break;
  
    case 2:
    printf("\n your years is : %d", days = (a - (years * 365) - (months * 30)));
    break;
  
    default:
    printf("\ninvlid");
    break;
}
   return 0;
}