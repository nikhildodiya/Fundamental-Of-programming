// WAP To Print Table Up to given Numbers
#include<stdio.h>
int main() //Main Method
{
	int n, i; // Variable For Store Value
	
	// Pass The Msg For Take User's Input
	printf("Enter Your Number: ");
	scanf("%d", &n);
	
	for(i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d \n", n, i, n*i);
	}
	return 0;
}