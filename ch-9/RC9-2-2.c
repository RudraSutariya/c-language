#include<stdio.h>
#include<string.h>
main()
{
	char i,e1[30]="sutariyarudra@gmail.com",p1[30]="Rudra1234",p2[30],e2[30],com1,com2;
	int len1,len2;
	printf("enter your e-mail: ");
	gets(e2);
	printf("enter your password: ");
	gets(p2);

	com1=strcmp(e1,e2);
	com2=strcmp(p1,p2);	
	
	if( com1==0 && com2==0)
	{
		printf("login succesfully !!");
	}
		else
	{
		printf("login failed invalid credentials !!");
	}
}
