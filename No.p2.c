#include<stdio.h>
#include<conio.h>
void main()
{
    int s=1,n,i;
    clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("%d",s);
    getch();
}
