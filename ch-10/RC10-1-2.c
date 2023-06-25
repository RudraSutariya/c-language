#include<stdio.h>
void divi()
{
	int a;
	printf("Enter any no:");
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
	{
		printf("The given number is divisible both 3&5");
	}
	else
	{
		printf("The given number is divisible not both 3&5");

	}
	
}
void main(){
	divi();
}
