#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char a[20];
   int b=3,i;
   clrscr();
   printf("Enter the string");
   scanf("%s",a);
   for(i=0;i<b;i++)
   {
       printf("%c",a[i]);
   }
   getch();
}
