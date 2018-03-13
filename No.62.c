#include<stdio.h>
#include<conio.h>
void main()
{
    
    char a[50];
    int i,k,count=0;
    clrscr();
    printf("Enter the string");
    gets(a);
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        if((a[i]=='0')&&(a[i]=='1'))
        count++;
    }
    if(count==0)
       printf("Yes");
    else
       printf("No");
    }
    
