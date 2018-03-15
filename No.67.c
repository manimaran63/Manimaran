#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    printf("Enter the value of a");
    scanf("%d",&a);
    while((a%10)!=0)
    {
        a++;
    }
    printf("%d",a);
    getch();
}
