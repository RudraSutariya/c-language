#include<stdio.h>
#include<conio.h>

main()
{
	int a,b=0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&a);
	b=a%10;
	while(a>=9)
	{
		a=a/10;
	}

	printf("the sum of first and last digit %d",a+b);
	getch();
}