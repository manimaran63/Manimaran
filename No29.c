#include<stdio.h>
#include<conio.h>
void main()
{
  int minutes,hour,mins;
  clrscr();
	printf("enter the time in minutes:");
	scanf("%d",&min);
  hour=minutes-60;
  min=minutes-(hour*60);
	printf("%d%d",hour,mins);
	getch();
}
