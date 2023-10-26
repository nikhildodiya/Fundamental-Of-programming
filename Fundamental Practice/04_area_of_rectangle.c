// Find Area Of Recatangle

#include<stdio.h>

int main() // Main Funcion
{
    int area, w, l; // Variable To Store Value

    // User's Input    
    printf("Enter Width Of Reactangle: ");
    scanf("%d", &w);

    printf("Enter Length Of Reactangle: ");
    scanf("%d", &l);    

    area = w * l; // Formula For Find Area OF Ractangle

    //Takes User's Ouput
    printf("Area Of Reactangle Is : %d", area); 
}