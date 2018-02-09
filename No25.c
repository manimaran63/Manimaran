#include<stdio.h>
#include<conio.h>
void main()
{
  int n,sum=0,i,a[100];
  clrscr();
  printf("Enter the size of array");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
   }
  for(i=0;i<n;i++)
  {
  sum=sum+a[i];
  }
  printf("median is %d",sum/n);
 getch();
} 
