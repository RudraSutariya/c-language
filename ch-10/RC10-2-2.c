#include<stdio.h>

int arlen(char a[],int n)
{
	int i,len=0;
	for(i=0; a[i]!=NULL; i++)
	{
		len++;
	}
	return len;
	
}
void main()
{
	int len=0;
	char a[30];
	
	printf("enter string : ");
	gets(a);
	
	len = arlen(a,30);
	printf("length of string is: %d",len);
}
