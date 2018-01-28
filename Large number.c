#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("Enter a values:");
   Scanf("%d",&a);
   printf("Enter b value:");
   scanf("%d",&b);
   printf("Enter c value:");
   scanf("%d",&c);
   if((a>b)&&(a>c))
   { 
         printf("The largest number is %d",a);
   }
   else if((b>a)&&(b>c))
   {
         printf("The largest number is %d",b);
   }
   else
      {
         Printf("The largest number is %d",c);
      }
getch();
}   
