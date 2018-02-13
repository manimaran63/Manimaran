#include<stdio.h>
#include<conio.h>
void main()
{
   int hr1,min1,hr2,min2,hr,min;
   clrscr();
   printf("Enter the hour and minute values");
   scanf("%d%d",&hr1,&min1);
   printf("Enter the hour and minute values");
   scanf("%d%d",&hr2,min2);
   if(hr1>hr2)
   {
     hr=hr1-hr2;
   }
   else
   {
     hr=hr2-hr1; 
   }
  if(min1>min2)
  {
     min=min1-min2;
  }
  else
  {
     min=min2-min1;
  }
  printf("%d%d",hr,min);
  getch();
}  
