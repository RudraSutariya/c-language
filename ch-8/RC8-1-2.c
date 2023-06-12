#include<stdio.h>
main()
{
	int n;
	printf("enter array size :",n);
	scanf("%d",&n);
	
	int a[n],i,sum=0;
	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
	{  
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		sum+=a[i];
		
		
		
	
	}
	printf("Average of an array %d",sum/n);
}
