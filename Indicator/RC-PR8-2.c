#include<stdio.h>
void array(int a[10][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void cube(int ptr[10][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",(ptr[i][j])*(ptr[i][j])*(ptr[i][j]));
		}
		printf("\n");

	}
	
}
void main()
{
	int n;
	printf("Enter array`s size: ");
	scanf("%d",&n);
	int a[n][n],j,i;
	int *p[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			p[i][j]=&a[i][j];
		}
	}
	array(a,n);
	printf("Cubes of all elements:\n ");
	cube(a,n);
}

	
