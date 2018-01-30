#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20];
 clrscr();
 int i,n,k,sum=0;
 printf("Size of array");
 scanf("%d",&n);
 printf("Enter k value");
 scanf("%d",&k);
 printf("Enter the elements of array");
 for(i=0;i<n;i++)
 {
    scanf("%d",& a[i];
 }
 for(i=0;i<k;i++)
 {
   sum=sum+a[i];
 }
 printf("sum of k values are %d",sum);
 getch();
 }
