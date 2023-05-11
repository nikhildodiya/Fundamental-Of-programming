// Wap To Find Area OF Circle, Rectangle, Triangle
#include<Stdio.h>
int main()  //Main Method
{
    int choice; // Variable For Store Value 
    float redius, area, height, height1, width, base;

    // Pass The Msg To User's Choice
    printf("\nPress 1 For Area Of Circle");
    printf("\nPress 2 For Area Of Rectengle");
    printf("\nPress 3 For Area Of Triangle\n");
    
    // Take User's Input
    printf("\nChoice ANy One Option : ");
    scanf("%d", &choice);

    switch(choice) //Perform Operation Based on Option
    {
    case 1:
    printf("\nEnter Redius Of Circle : ");
    scanf("%f", &redius);
    area = 3.14 * redius * redius;
    printf("Area Of Circle = %f", area);
    break;

    case 2:
    printf("\nEnter Height and Width Of Rectangle : ");
    scanf("%f%f",&height, &width);
    area = height * width;
    printf("Area Of Rectangle = %f", area);
    break;

    case 3:
    printf("\nEnter Base And Height : ");
    scanf("%f%f", &base, &height1);
    area = (base * height1)/2;
    printf("Area Of Triangle = %f", area);
    break;

    default:
    printf("Invalid Choice");
    break;
    }
}