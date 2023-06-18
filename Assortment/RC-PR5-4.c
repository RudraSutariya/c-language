#include<stdio.h>
main()
{
	int n,k,r,rs,c,cs=0;
	printf("enter the row`s size ");
	scanf("%d",&n);
	printf("enter the column`s size ");
	scanf("%d",&k);
	int a[n][k],i,j,max=0;
	printf("Enter arrays element :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
	    }
	}	
	printf("Enter row number");
	scanf("%d",&r);
	printf("Elements of row %d:",r);
	for(i=r;i<r+1;i++)
	{
		for(j=0;j<k;j++)
		{
			printf(",%d",a[i][j]);
			rs+=a[i][j];
	    }
	    printf("\n");
	}
	printf("The sum of a row %d:%d\n",r,rs);
	printf("Enter column number");
	scanf("%d",&c);
	printf("Elements of row %d:",c);
	for(i=0;i<n;i++)
	{
		for(j=c;j<c+1;j++)
		{
			printf(",%d",a[i][j]);
			cs+=a[i][j];
	    }
	}
	printf("\nThe sum of a row %d:%d\n",c,cs);
	
}
