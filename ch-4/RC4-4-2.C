#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a:%d\nb:%d",a,b);
	getch();
}