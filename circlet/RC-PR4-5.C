#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s,sp=4,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(s=1;s<=sp;s++)
		{
			printf("  ");
		}
		sp--;
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
}
