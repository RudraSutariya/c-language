#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter first angle of triangle");
	scanf("%d",&a);
	printf("enter second angle of triangle");
	scanf("%d",&b);
	printf("the third angle of triangle is %d",180-a-b);
	getch();
}
