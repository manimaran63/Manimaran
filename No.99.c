#include<stdio.h>
#include<conio.h>
void main()
{
    int p,n,r,i;
    clrscr();
    printf("Enter the values p & n & r");
    scanf("%d\t%d\t%d",&p,&n,&r);
    i=(p*n)%r;
    printf("%d",i);
    getch();
}    
