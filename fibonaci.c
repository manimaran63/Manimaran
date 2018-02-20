#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,a=-1,b=1,c;
  clrscr();
  printf("Enter n value");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     c=a+b;
     printf("%d",c);
     a=b;
     b=c;
  }
 getch();
}
