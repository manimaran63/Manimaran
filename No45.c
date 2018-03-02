#include<stdio.h>
#include<conio.h>
void main()
{
    int a,count=0;
    clrscr();
    printf("Enter a value");
    scanf("%d",&a);
    while(a!=0)
    { 
        a/=10;
        ++count;
    }
    printf("%d",count);
    getch();
}

