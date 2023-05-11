//WAP To reverse a string and chck that the string is palindrome or not
#include <stdio.h>
#include <string.h>  
int reverseStr(char str[])
{
  int n = strlen(str);
  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}

int checkPalindrom(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            printf("%s \nis not a palindrome\n", str);
            return 0;
            // will return from here
        }
    }
  
    printf("%s \nis a palindrome\n", str);
}

int main()
{
  char str[1000];
  scanf("%s", str);
  reverseStr(str);
  printf("String After Reverse: %s", str);
    checkPalindrom(str);
  return 0;
}