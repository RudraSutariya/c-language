#include <stdio.h>
#include <string.h>
 
main()
{
    char str[30], rev[30];
    int i,len=0,p=0,j;
 
    printf("Enter a string ");
    scanf("%[^\n]",&str);
    
    for (i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for (i=len-1;i>=0;i--)
    {
       	rev[len-i-1]=str[i];
    }
    for (j=1,i=0;i<len;i++)
    {
        if (rev[i]!=str[i])
        {
            j=0;
    	}
    }
    if (j==1)
       printf("This is a palindrome \n",str);
    else
       printf("This is not a palindrome \n",str);
}
