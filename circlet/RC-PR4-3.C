#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,sp=4;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=sp;s++)
		{
			printf(" ");
		}
		sp--;
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}