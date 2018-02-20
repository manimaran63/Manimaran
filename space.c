#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[50];
  int i,count=0;
  clrscr();
  printf("Enter the string");
  scanf("%s",&a[i]);
  for(i=0;a[i];i++)
  {
    if(a[i]==' ')
    count++;
    printf("The space is %d",count);
  }
  getch();
}  
