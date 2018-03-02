#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char a[50];
     char b[50];
     int i=0,j=0;
     clrscr();
     printf("Enter the first string");
     scanf("%s",a);
     printf("\nEnter the second string");
     scanf("%s",b);
     while(a[i]!='\0')
     i++;
     while(b[j]!='\0')
     {
         a[i]=b[j];
         i++;
         j++;
     }
     a[i]!='\0';
     printf("%s",a);
    getch();
}
