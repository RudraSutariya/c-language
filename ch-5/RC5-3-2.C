#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	(a<b)
		? (a<c)
			? (a<d)
				? printf("The minimum value is %d",a)
				: printf("The minimum value is %d",d)
			: (c<d)
				? printf("The minimum value is %d",c)
				: printf("The minimum value is %d",d)
		:(b<c)
			? (b<d)
				? printf("The minimum value is %d",b)
				: printf("The minimum value is %d",d)
			: (c<d)
				? printf("The minimum value is %d",c)
				: printf("The minimum value is %d",d);
	getch();
}