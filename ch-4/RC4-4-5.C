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
	printf("The value of (x+y)^3 is :%d",x*x*x+y*y*y+3*x*y*y+3*x*x*y);
	getch();
}