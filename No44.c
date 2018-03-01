#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("Enter n value");
    scanf("%d",&n);
    if(n>='1'||n<='9')
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    getch();
}
