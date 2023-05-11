#include<stdio.h>
int main()
{
    char alphabet;

    printf("\nEnter Your Alphabet : ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
        case 'a':
          case 'A':
          printf("Your Alphabet Is Vowel..", alphabet);
          break;

        case 'e':
          case 'E':
          printf("Your Alphabet Is Vowel..", alphabet);
          break;

        case 'i':
          case 'I':
          printf("Your Alphabet Is Vowel..", alphabet);
          break;

        case 'o':
          case 'O':
          printf("Your Alphabet Is Vowel..", alphabet);
          break;
         
        case 'u':
          case 'U':
          printf("Your Alphabet Is Vowel..", alphabet);
          break;
             
        default:
        printf("\n Your Alphabet Is Consonant..."); 
    }
    return 0;
}