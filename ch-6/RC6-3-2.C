#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,sum=0;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=0; i>=n; i++)
	{
		sum=sum*i;

	}
	printf("the sum of all no is %d",sum);
	getch();
}