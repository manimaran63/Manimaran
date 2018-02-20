#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[50];
	int len,i,count,b;
	printf("Enter the string");
	scanf("%s",&a[i]);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
	  if(a[i]==' ')
		count++;
	}
	 b=len-count;
	 printf("%d",b);
	 getch();
}	 
