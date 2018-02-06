#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,s=1;
   clrscr();
   printf("Enter the value of n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      s=s*i;
   }
   printf("The factorial is %d",s);
   getch();
}   
