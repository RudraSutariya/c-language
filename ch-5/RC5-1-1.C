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
	if (a<'b')
	{
		printf("The minimum no is %d",a);
	}
	else
	{
		printf("The minimum no is %d",b);
	}
	getch();
}