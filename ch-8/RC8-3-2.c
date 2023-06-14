#include<stdio.h>
main()
{
	int r,c;
	printf("Enter no of rows :");
	scanf("%d",&r);
	printf("Enter no of columns :");
	scanf("%d",&c);
	int a[r][c],i,j,b[r][c],d[r][c];
	printf("enter arrays A`s element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("Enter array B`s element\n")	;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];

		}
	}
	
	printf("the array c is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",d[i][j]);
		}
		printf("\n");
	
	}
		
}
