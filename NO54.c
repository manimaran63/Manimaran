#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("Enter n value");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d",n);
    else
        printf("%d",--n);
    getch();
}    
