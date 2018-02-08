#include<stdio.h>
#include<<conio.h>
void main()
{
  int b,c,i,a[15];
  clrscr();
  printf("Enter the size of array")
  scanf("%d",&b);
  printf("Enter the elements of array");
     for(i=0;i<b;i++)
     {
       scanf("%d",&a[i]);
     }  
     c=a[0]
     for(i=0;i<b;i++)
     {
     if(c<a[i])
         c=a[i];
     }
     printf("The maximum element is %d",c);
     getch();
}     
