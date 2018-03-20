#include<stdio.h>
#include<conio.h>
void main()
{
    int m;
    char n='A';
    clrscr();
    printf("Enter the number\n");
    scanf("%d",&m);
    n=n+m-1;
    printf("%c",n);
    getch();
}
