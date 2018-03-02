#include<stdio.h>
#include<conio.h>
void main()
{
    int a=-1,b=1,n=5,c,i;
    clrscr();
    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    getch();
}
