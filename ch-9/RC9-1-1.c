#include<stdio.h>
main()
{
	char st[30];
	int i;
	printf("Enter any string:");
	scanf("%s",&st);
	for(i=0;i<=30;i++)
	{
		if(st[i]>=97 && st[i]<=122)
		{
			st[i] -= 32;
		}

	}
			printf("UPPERCASAE string:%s",st);	

}
