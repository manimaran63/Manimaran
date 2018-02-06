#include<stdio.h>
#include<conio.h>
void main()
{
   int a,m,n;
   clrscr();
   printf("Enter the limits:");
   scanf("%d%d",&m,&n);
   for(a=m;a<=n,a++)
   { 
     if(a%2==0)
       printf("%d",a);
   }
getch();
}
