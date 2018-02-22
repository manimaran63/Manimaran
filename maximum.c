#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[10],b;
    clrscr();
    printf("Enter the elements");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    b=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>b)
        {
        b=a[i];
        }
    }
    printf("The maximum is %d",b);
    getch();
}
