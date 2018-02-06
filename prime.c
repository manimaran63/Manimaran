#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,s=o;
  clrscr();
  printf("Enter a positive integer");
  scanf("%d",&n);
  for(i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
           s=1;
           break;
      }
  }
  if(s==0)
  {
      printf("prime number");
  }
 else
 {
    printf("Not a prime number");
 }
getch();
}
