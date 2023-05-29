#include<stdio.h>
#include<conio.h>
main()
{
	float unit,bill,a;
	clrscr();
	printf("Enter electircity bill");
	scanf("%f",&unit);
	if(unit<50.0 && unit>=0.0)
	{
		bill=unit*0.5;
	}
	else if(unit<=150.0 && unit>50.0)
	{
		bill=(unit-50.0)*0.75+25.0;
	}
	else if(unit<=250.0 && unit>150.0)
	{
		bill=(unit-150.0)*1.2+100.0;
	}
	else if(unit>250.0)
	{
		bill=(unit-250.0)*1.5+220.0;
	}
	else
	{
		printf("!!Invalid electricity unit!!");
	}
	a=bill*20.0/100.0+bill;
	printf("\n electricity bill=%.2f",a);
	getch();
}