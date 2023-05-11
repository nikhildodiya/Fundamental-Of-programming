// WAP To find out length of string without using inbuilt function
#include<stdio.h>
int main() // main Method
{
    char string[50]; 
    int i, length = 0;
 
   // Pass The msg to take users input
    printf("Enter the string : ");
    gets(string);
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("the length of %s = %d\n", string, length);
}