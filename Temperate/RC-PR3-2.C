#include<stdio.h>
#include<conio.h>

main()
{
	int a=0,c=0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&a);
	while(a>0)
	{
		a=a/10;
		c++;
	}
	printf("total no of digit %d",c);
	getch();
}