#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,count=0;
  char a[50];
  clrscr();
  printf("Enter the string");
  scanf("%s",&a[i]);
  for(i=0;a[i]!='/0';i++)
  { 
    if(a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='z')
    {
      count=count+1;
    }
    printf("Number of special characters are %d",count);
   }
   getch();
}   
