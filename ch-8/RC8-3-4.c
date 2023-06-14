#include<stdio.h>

main()
{ 
	int j,i,sum=0,a[5][5];
	printf("Enter arrays element:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((i==0) || (j==0) || (j==5) || (i==5))
			{
				printf("%d",&a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
	}
   	printf
	   ("the sum of boundary element of array is %d",sum);
}  
