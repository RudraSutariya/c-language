#include<stdio.h>

main()
{
    
 	 int n;
 	 printf("Enter array size :",n);
 	 scanf("%d",&n);
 	 
 	int a[n],i ;
 	printf("Enter array a`S elements :\n");
 	for(i=0;i<n;i++)
 	{
	    printf("a[%d]  = ",i);
	    scanf("%d",&a[i]);
	}
	
		 printf("The squars are :");
		  for(i=0;i<n;i++)
		  {

		     printf("%d,",a[i]*a[i]);
			 
		  }
}
