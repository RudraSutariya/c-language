#include<stdio.h>

main()
{
    
 	 int n,k;
 	 printf("Enter array size :",n);
 	 scanf("%d",&n);
 	 
 	int a[n],b[n],c[n],i ;
 	printf("Enter array a`S elements :\n");
 	for(i=0;i<n;i++)
 	{
	    printf("a[%d]  = ",i);
	    scanf("%d",&a[i]);
	 }
	 printf("Enter array size :");
 	 scanf("%d",&k);
 	 
	 printf(" Enter array B's element\n",k);
     for(i=0;i<k;i++)
	 {
		 printf("b[%d] = ",i);
		 scanf("%d",&b[i]);
		 }	
		 printf("array c is :");
		  for(i=0;i<n+k;i++)
		  {
		  		if(i<n)
		  		{
		  			c[i] = a[i];				
			    }
				  else
				  {
				  	c[i] = b[i-n];

				  }
		     printf("%d,",c[i]);
			 
		  }
}
