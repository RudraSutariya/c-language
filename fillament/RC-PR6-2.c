#include <stdio.h>
#include <string.h>
 
main()
{
    char str[30];
    int i,n,j,k=1;
 
    printf("Enter a string :");
	gets(str);
	printf("your frequency is :\n");
    
    for(i=0;str[i]!=NULL;i++)
    {
    	for(j=i+1;str[j]!=NULL;j++)
    	{
    		if(str[i]==str[j])
    		{
    			k++;
			}
		}
		printf("%c => %d\n",str[i],k);
		k=1;
    }
}
