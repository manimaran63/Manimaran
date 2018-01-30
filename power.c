#include<stdio.h>
#Include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter the number");
  scanf("%d",&a);
  printf("Enter the power");
  scanf("%d",&b);
  c=pow(a,b);
  printf("The power of the number is %d",c);
  getch();
}  
