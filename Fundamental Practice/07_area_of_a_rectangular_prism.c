//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>

int main() // Main Function 
{
    int area, w, l, h; // Variable For Store The Value

    // Takes User Input
    printf("Enter Height of Prism: ");
    scanf("%d", &h);

    printf("Enter Length of Prism: ");
    scanf("%d", &l);

    printf("Enter Width of Prism: ");
    scanf("%d", &w);

    area = 2*(w*l+h*l+h*w); // find the area of a rectangular prism 

    // Takes User's ouput
    printf("area of a rectangular prism is %d", area);
}