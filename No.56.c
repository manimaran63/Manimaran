#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char ch[10];
    clrscr();
    printf("Enter the string");
   gets(ch);
   int flag=0;
    for(int i=0;ch[i]!='\0';i++)
    {
    if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='0'&&ch[i]<='9'))
    {
       
       flag++;
    }
   
    }
    if(flag>0)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    getch();
}
