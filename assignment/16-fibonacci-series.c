//WAp To Find Fibonacci Series Up To Given Number
#include<stdio.h>
int main()
{
    int n;
    int a = 0, b = 1;
    int i, febo;

    // Pass The Msg To take User Input
    printf("Enter Your Number : ");
    scanf("%d", &n);
    
    // Pass The Msg For Take User Output
    printf("%d %d ", a, b);

    for(i = 1; i < n-1; i++)
    {
        febo = a + b;
        a = b;
        b = febo;
       
        printf("%d ", febo);
    }        
    return 0; 
}