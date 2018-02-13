#include<stdio.h>
#include<conio.h>
void main()
{
 int a=10,b=15;
 clrscr();
 printf("Before swap");
 printf("%d\t%d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nAfter swap");
 printf("%d\t%d",a,b);
 getch();
}   
