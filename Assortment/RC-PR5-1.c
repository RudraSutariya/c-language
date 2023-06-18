#include<stdio.h>
main()
{
	int n;
	printf("enter the array`s size ");
	scanf("%d",&n);
	int a[n],i,j;
	printf("Enter arrays element :\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}	
	printf("Negative elements from array");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
		
	}

}
