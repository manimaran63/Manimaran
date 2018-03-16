#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    printf("Enter the number");
    scanf("%d",&a);
    if(a%13==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    getch();
}
