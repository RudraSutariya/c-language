#include<stdio.h>
#include<string.h> 
void main()
{
	char str[30];
	printf("Enter any string ");
	gets(str);
	int *ptr[30],i,len=0;
	for(i=0;i<30;i++)
	{
		ptr[i]=&str;
	}
	for(i=0;str[i] !=NULL;i++)
	{
		len++;		
	}
	printf("The length of string is:%d",len);
}
