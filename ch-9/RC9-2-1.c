#include<stdio.h>
#include<string.h>
main()
{
	char i,p[30],c=0,s=0,d=0,ch=0,len ;
	printf("create your password : ");
	gets(p);
	
	len=strlen(p);
	
	for(i=0;i<len;i++){
		if(p[i]>=65 && p[i]<=90)
		{
			c++;
		}
		else if(p[i]>=97 && p[i]<=122)
		{
			s++;
		}
		else if(p[i]>=48 && p[i]<=57)
		{
			d++;
		}
		
		else
		{
			ch++;
		}
	}
		
	if(c>0 && s>0 && d>0 && ch>0 &&len>=1)
	{
		printf("your password is so strong ! ");
	}
	else
	{
		printf("your password is not so strong ! ");
	}
}
