#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[10];
    int i,b;
    clrscr();
    printf("Enter the string");
    scanf("%s",a);
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u')
        {
            b++;
        }
    }
    if(b==0)
        printf("yes");
    else
        printf("No");
    getch();
}    
