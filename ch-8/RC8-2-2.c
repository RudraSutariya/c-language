#include<stdio.h>

main()
{
	int i,n,g,k,p=0;
	printf("Enter first number");
	scanf("%d",&n);
	printf("Enter second number");
	scanf("%d",&g);
	k=(g-n)/4;
	int a[k];
	printf("your array is");
	for(i=n;i<=g;i++)
	{
			if(n%4==0)
		{
			a[p]=n;
			p++;
		}
		n++;
	
	}
	for(i=0;i<=k;i++)
	{
		printf(" %d",a[i]);
	}
	
}
