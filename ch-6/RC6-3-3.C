#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	getch();
}