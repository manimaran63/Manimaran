#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    char b='A';
    clrscr();
    printf("Enter the number\n");
    scanf("%d",&a);
    b=b+a-1;
    printf("%c",b);
    getch();
}
