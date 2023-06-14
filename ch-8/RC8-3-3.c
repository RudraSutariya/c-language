#include<stdio.h>
main()
{
	int r,sum=0,i,j;
	printf("Enter no of rows & coloums :");
	scanf("%d",&r);
	int a[r][r];
	printf("enter arrays element\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("The sum of diagonla elements of an array is %d",sum);
		
}
