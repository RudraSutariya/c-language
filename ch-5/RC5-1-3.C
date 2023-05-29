#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter the value of marks");
	scanf("%d",&a);
	if (a>90 && a<100)
	{
		printf("A1");
	}
	else if (a>80 && a<90)
	{
		printf("A2");
	}
	else if (a>70 && a<80)
	{
		printf("B1");

	}
	else if (a>60 && a<70)
	{
		printf("B2");
	}
	else if (a>50 && a<60)
	{
		printf("C1");
	}
	else if (a<40 && a>32)
	{
		printf("C2");
	}
	else if (a<34)
	{
		printf("Fail");
	}
	else
	{
		printf("!!!Invalid marks!!!");
	}
	getch();
}
