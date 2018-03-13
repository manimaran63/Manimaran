#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter the values of a and b");
    scanf("%d\t%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The values are %d\t%d",a,b);
    getch();
}
