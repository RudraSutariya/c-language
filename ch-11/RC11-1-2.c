#include<stdio.h>

main()
{
	int x,y;
	int *ptr1,*ptr2;
	system("color E5");
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	ptr1 = &x;
	ptr2 = &y;
	printf("Before swaping\n");
	printf("x:%d\ny:%d\n",*ptr1,*ptr2);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swaping\n");
	printf("x:%d\ny:%d",*ptr1,*ptr2);	
}
