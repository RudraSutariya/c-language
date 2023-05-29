#include<stdio.h>
#include<conio.h>
main()
{
	int salary,HRA,DA,TA,grossalary;
	HRA=10;
	TA=8;
	DA=5;
	clrscr();
	printf("Enter the value of salary");
	scanf("%d",&salary);
	grossalary=salary*HRA/100+salary*TA/100+salary*DA/100+salary;
	printf("the value gross salary %d",grossalary);
	getch();
}