#include<stdio.h>


int first()
{
	int a;
	printf("\nEnter the first number ");
	scanf("%d",&a);
	return a;
}
int second()
{
	int b;
	printf("Enter the first number ");
	scanf("%d",&b);
	return b;
}
void main()
{
 	int n,a,b;

	do
	{
		printf("press 1 for +\n");
  		printf("press 2 for -\n");
 		printf("press 3 for *\n");
 		printf("press 4 for /\n");
 		printf("press 5 for %\n");
 		printf("press 0 for exit ");
 		printf("\nenter your choice ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				a=first();
				b=second();
				printf("Addition of %d & %d is %d\n",a,b,a+b);
				break;
				
			case 2:
				a=first();
				b=second();
				printf("Subtraction of %d & %d is %d\n",a,b,a-b);
				break;
			case 3:
				a=first();
				b=second();
				printf("multiplication of %d & %d is %d\n",a,b,a*b);
				break;
			case 4:
				a=first();
				b=second();
				printf("division of %d & %d is %d\n",a,b,a/b);
				break;
			case 5:
				a=first();
				b=second();
				printf("Modulas of %d & %d is %d\n",a,b,a%b);
				break;
			case 0:
				break;
		
		}
	}while(n!=0);
}
