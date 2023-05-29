#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	(a<b)
		? (a<c)
			? printf("The minimum value is %d",a)
			: printf("The minimum value is %d",c)
		:(b<c)
			? printf("The minimum value is %d",b)
			: printf("The minimum value is %d",c);
	getch();
}