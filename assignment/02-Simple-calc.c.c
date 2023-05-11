// USE OF ARITHMETIC

#include<stdio.h>
int main() // Main Method
{
    int a,b; // varibale For Store The Value
    int ans; // store The Answer
    float div; // To Store the Divison Answer In point

// Pass The Msg To Take User Input    

printf("Enter value of the a:");
scanf("%d", &a); // Use To Take The user Input

printf("enter value of the b:");
scanf("%d", &b);

ans = a + b; // Addition OF the Two Value
printf("\nadition of the a and b: %d", ans);

ans = a - b; // Substraction OF the Two Value
printf("\nSubstraction of the a and b: %d", ans);

ans = a * b; // Multiplcation OF the Two Value
printf("\nmultiplicaion of the a and b: %d", ans);

// Explicit Type Conversion (int to Float)
div = (float)a / (float)b; // Divison OF the Two Value
printf("\ndivision of the a and b: %f", div);

ans = a % b; // Modulo OF the Two Value
printf("\nmodulo of the a and b: %d", ans);

return 0;

}