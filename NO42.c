#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char a[50];
     char b[50];
     int n1,i,n2;
     clrscr();
     printf("Enter the first string");
     scanf("%s",a);
     printf("\nEnter the second string");
     scanf("%s",b);
     n1=strlen(a);
     n2=strlen(b);
     if(n1>n2)
     {
         printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
 getch();
}
