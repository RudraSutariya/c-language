#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();
	printf("Enter first number");
	scanf("%d",&n);
	printf("Enter second number");
	scanf("%d",&i);
	while(n<=i)
	{
		if(n%4==0)
		{
			printf("%d ",n);
		}
		n++;

	}
	getch();
}