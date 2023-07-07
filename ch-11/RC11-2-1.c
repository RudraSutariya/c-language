#include<stdio.h>
 void main()
 {
 	int n,i;
 	printf("Enter the array's size :");
 	scanf("%d",&n);
 	int a[n];
 	int *p[n],*r[n];
 	for(i=0;i<n;i++)
 	{
 		p[i]=&a[i];
	 }
 	
 	printf("Enter array's element\n");
 	for(i=0;i<n;i++)
 	{
 		printf("a[%d]:",i);
 		scanf("%d",&a[i]);
	 }
 	 	for(i=0;i<n;i++)
 	{
 		r[n-i-1]=&a[i];
	 }
	  	printf("Reversed array elements\n");

 	for(i=0;i<n;i++)
 	{
 		printf("a[%d]:%d\n",i,*r[i]);
	 }
 	
 }
