// WAP To print and display emplyee details
#include<stdio.h>
struct structure // 
{
char empname[20],empadd[20];
int empno, age;
}st;

int main()
{
    for(int i = 0; i < 5; i++)
    {
    printf("Enter Emp No: ");
    scanf("%d", &st.empno);
    printf("Enter Emp  Name : ");
    scanf("%s", &st.empname);
    printf("Enter Emp Address : ");
    scanf("%s", &st.empadd);
    printf("Enter Emp age : ");
    scanf("%d", &st.age);
    }
    for(int i = 0; i < 5; i++)
    {
    printf("\nemp no=%d\nemp name=%s\nemp address=%s\nemp age=%d\n", st.empno,st.empname,st.empadd,st.age);
    }
}