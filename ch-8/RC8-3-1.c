#include<stdio.h>
main()
{
	int r,c,sum;
	printf("Enter no of rows :");
	scanf("%d",&r);
	printf("Enter no of columns :");
	scanf("%d",&c);
	int a[r][c],i,j,ave;
	printf("enter arrays element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	ave=sum/(r*c);
	printf("%d",ave);
		
}
