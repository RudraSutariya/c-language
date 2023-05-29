#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter the value of a:");
	scanf("%d",&a);
	if (a<'0')
	{
		printf("The value is negative");
	}
	else if (a>'0')
	{
		printf("The value is positive");
	}
	else
	{
		printf("The value is neutral");
	}
	getch();
}