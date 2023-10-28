// Accept number of students from user. I need to give 5 apples to each student. 
// How many apples are required?

#include<stdio.h>

int main() // Main Function
{
    int stud, apples; // Variable To Store The Value

    // Takes User's Input
    printf("Number Of Student ");
    scanf("%d", &stud);

    apples = stud * 5; // Formula For Find How many Apples Needed

    // Takes Uers's Ouput
    printf("You Need %d Apples To Give Students", apples);
}