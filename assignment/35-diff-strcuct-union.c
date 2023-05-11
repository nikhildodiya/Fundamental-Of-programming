1). structure defination::
structure is a user-defined data type in a programming language that stores different data types values together. 
The struct keyword is used to define a structure data type in a program. 
The struct data type stores one or more than one data element of different kinds in a variable.

struct [structure_name]  
{  
    type member_1;  
    type member_2;  
    . . .   
    type member_n;  
};

2). Union Defination:
In c, programming union is a user-defined data type that is used to store the different data type's values.
However, in the union, one member will occupy the memory at once. 
In other words, we can say that the size of the union is equal to the size of its largest data member size. 
Union offers an effective way to use the same memory location several times by each data member. 
The union keyword is used to define and create a union data type.

union [union name]  
    {  
    type member_1;  
    type member_2;  
    . . .   
    type member_n;  
    };  

Structure Program:

#include<stdio.h>
struct Structure
{
    // Variable is known as data member which was define inside the structure body
    // Can't initialize the data member inside the structure body
    int id;
    char nm[20];
}st;
int main()
{
    // struct Structure st;
    printf("Enter the value of id:");
    scanf("%d", &st.id);
    printf("Enter the your name:");
    scanf("%s", &st.nm);

    printf("\n%s your id is:%d", st.nm, st.id);
}

Union Program:

#include<stdio.h>
union Structure
{
    // Variable is known as data member which was define inside the structure body
    // Can't initialize the data member inside the structure body
    int id;
    char nm[20];
}st;
int main()
{
    // union Structure st;
    printf("Enter the value of id:");
    scanf("%d", &st.id);
    printf("Enter the your name:");
    scanf("%s", &st.nm);

    printf("\n%s your id is:%d", st.nm, st.id);
}