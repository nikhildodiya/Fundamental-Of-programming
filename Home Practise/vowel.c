#include<stdio.h>
int main()
{
    char alphabet;
    int lower, upper;

    printf("\n Enter your alphabet : ");
    scanf("%c", &alphabet);

    lower = (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u');
    upper = (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U');

    if (lower || upper)
        printf("%c is a vowel.",alphabet);
    else
        printf("%c is a Consonant.", alphabet);
        return 0;    
}