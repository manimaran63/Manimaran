#include <stdio.h>
#include<conio.h>
 void main()
{
   int a,i,s=5;
   clrscr();
   printf("Enter the limit");
   scanf("%d",&a);
   for(i=1;i<=a,i++)
   {
        s=s*i;
        printf("%d",s);
   }
   getch();
}   
