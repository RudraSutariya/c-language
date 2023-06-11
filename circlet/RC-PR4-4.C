#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,sp=5;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(s=5;s>=sp;s--)
		{
			printf(" ");
		}
		sp--;
		for(j=5;j>=i;j--)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
	getch();
}