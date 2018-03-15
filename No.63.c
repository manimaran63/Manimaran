#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[50];
  int i,b=1;
  clrscr();
  printf("Enter the sentence");
  scanf("%s",a);
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]==' ')
      {
          b=b+1;
      }
  }
  printf("\n%d",b);
  getch();
}  
