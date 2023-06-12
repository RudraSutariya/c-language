#include<stdio.h>

main()
{
    
 	 int n;
 	 printf("Enter array size :",n);
 	 scanf("%d",&n);
 	 
 	int a[n],b[n],c[n],i ;
 	printf("Enter array a`S elements :\n");
 	for(i=0;i<n;i++)
 	{
	    printf("a[%d]  = ",i);
	    scanf("%d",&a[i]);
	 }
	 printf(" Enter array B's: %d\n",n);
     for(i=0;i<n;i++)
	 {
		 printf("b[%d] = ",i);
		 scanf("%d",&b[i]);
		 }	
		 printf("array c is :");
		  for(i=0;i<n;i++)
		  {
		     printf("%d,",a[i]+b[i]);
			 
		  }
}
