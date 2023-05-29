#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	if (a==b && b==c && a==c)
	{
		printf("All the value is same");
	}
	else if (a==b)
	{
		if (a>c)
		{
			printf("c is small");
		}
		else
		{
			printf("a & b is small");
		}
	}
	else if (b==c)
	{
		if (a>c)
		{
			printf("b & c is small");
		}
		else
		{
			printf("a is small");
		}
	}
	else if (a==c)
	{
		if (a>b)
		{
			printf("b is small");
		}
		else
		{
			printf("a & c is small");
		}

	}

       else if (a>b)
	{
		if (a>c)
		{
			printf("a is small");
		}
		else
		{
			printf("b is small");
		}
	}
	else
	{
		if (b<c)
		{
			printf("b is small");
		}
		else
		{
			printf("c is small");
		}
	}
	getch();
}




       if (a>b)
	{
		if (a>c)
		{
			if (a>d)
			{
				printf("a is maximum");
			}
			else
			{
				print("d is maximum");
			}
		}


