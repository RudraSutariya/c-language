#include<stdio.h>
int getint()
{
	int a;
	printf("Enter size ");
	scanf("%d",&a);
	return a;
}
int sum(int a[],int n)
{
	int sum = 0,i=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	
	return sum;
}
int array(int a[],int n)
{
	int i;
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:-",i);
		scanf("%d",&a[i]);
	}
}
void main()
{
	int add,n;
	n=getint();
	int a[n];
	array(a,n);
	add=sum(a,n);
	printf("The sum of an Array: %d",add);
}
