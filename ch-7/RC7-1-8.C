#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k=0;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			k++;
			printf("%d ",k);
		}
		printf("\n");
	}
	getch();
}