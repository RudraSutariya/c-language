#include<stdio.h>
void main()
{
	FILE *e;
	FILE *o;
	int i;
	e=fopen("even.text","w");
	o=fopen("odd.text","w");
	for(i=50;i<70;i++)
	{
		if(i%2==1)
		{
			fprintf(o,"%d\n",i);
			
		}
		else
		{
			fprintf(e,"%d\n",i);
		}
	}
	fclose(e);
	fclose(o);
	
	
}
