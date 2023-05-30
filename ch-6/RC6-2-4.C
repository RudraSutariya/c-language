#include<stdio.h>
#include<conio.h>

main()
{
	int n1=0,n2=1,n3,n,i;
	clrscr();
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("%d %d ",n1,n2);
	for(i=1; i<=n-2; i++)
	{

		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}

	getch();
}