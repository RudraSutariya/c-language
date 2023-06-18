#include<stdio.h>
main()
{
	int n,k;
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)		
		{
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
		}
		
	}
	printf("maximum number :%d",max);
}
