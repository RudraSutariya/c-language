#include<stdio.h>
#include<conio.h>

main()
{

	char i='a';
	clrscr();

	do
	{
		if(i%4==1)
		{
			printf("%c ",i);
		}
		i++;
	}while(i<'z');
	getch();
}