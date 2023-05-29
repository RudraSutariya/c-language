#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
	clrscr();
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	printf("The value of (x-y)^2 is :%d",x*x+y*y-2*x*y);
	getch();
}