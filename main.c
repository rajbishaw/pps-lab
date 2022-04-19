/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    printf("enter operations +,-,*,/");
    scanf("%c",&ch);
    int a,b;
    printf("enter operands \n");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
        case '-':
        printf("%d-%d=%d",a,b,a-b);
        break;
        case '*':
        printf("%d*%d=%d",a,b,a*b);
        break;
        case '/':
        printf("%d/%d=%d",a,b,a/b);
        break;
        default:
        printf("invalid operation");
    }
    
    return 0;
}
