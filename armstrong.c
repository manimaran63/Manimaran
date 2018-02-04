#include<stdio.h>
#include<conio.h>
void main()
{
   int n1,n,remainder,s=0;
   clrscr();
   printf("Enter the value");
   scanf("%d",&n);
   n1=n;
   while(n>0)
   {
      remainder=n%10;
      s=s+remainder*remainder*remainder;
      n=n/10;
   }
   if(n1==s)
   {
      printf("Armstrong number");
   }
   else
   {
       printf("Not Armstrong number");
   }
   getch();
}   
