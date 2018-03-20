#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[10],i,sum=0;
    clrscr();
    printf("Enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\n%d",sum);
    getch();
}    
