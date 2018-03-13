#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter the valuse of a and b");
    scanf("%d\t%d",&a,&b);
    c=a+b;
    if(c%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
}
