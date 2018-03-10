#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char str[10];
   clrscr();
   printf("Enter the string");
   scanf("%s",&str);
   strrev(str);
   printf("Reverse string is %s",str);
   getch();
}   
