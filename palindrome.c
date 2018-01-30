#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,t,s=0;
  clrscr();
  printf("Enter n value");
  scanf("%d",&n);
  t=n;
  while(n!=0)
  {
     r=n%10;
     s=s*10+r;
     n=n/10;
  }
  if(t==s)
  {
     printf("The number is palindrome",t);
  }
  else
  {
      printf("the number is not palindrome",t);
  }    
  getch():
 } 
