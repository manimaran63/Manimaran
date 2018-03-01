#include<stdio.h>
#include<conio.h>
void main() 
{
	int a[10],n,sum=0,i,average;
	clrscr();
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	average=sum/n;
	printf("%d",average);
	getch();
}
