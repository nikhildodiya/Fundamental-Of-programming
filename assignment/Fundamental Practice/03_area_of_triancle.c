//Find Area Of Cube

#include<stdio.h>

int main() // Main Function
{
    int tri, b, h; // Variable For Store The Value

    // User's Input    
    printf("Enter Base: ");
    scanf("%d", &b);

    printf("Enter height: ");
    scanf("%d", &h);

    tri = (b * h)/2; // Formula For Find Area Of Triangle

    // Takes User's Output
    printf("area Of Triangle: %d", tri);
}