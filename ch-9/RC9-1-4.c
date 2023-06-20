#include<stdio.h>
main()
{
	char st[30];
	int i;
	printf("Enter any string:");
	scanf("%[^\n]",&st);
	for(i=0;i<=30;i++)
	{
		if(st[i]==' ')
		{
			if(st[i+1]>=97 && st[i+1]<=122)
			{
			st[i+1] -= 32;
			}
		}
		else if(i==0)
		{
			if(st[i]>=97 && st[i]<=122)
			{
				st[i] -= 32;
			}
	
			
		}
	}
			printf("Titlecase string:%s",st);	

}
