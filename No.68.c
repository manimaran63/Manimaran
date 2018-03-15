#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    printf("Enter the value of a");
    scanf("%d",&a);
    if(a%7==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    getch();
}
