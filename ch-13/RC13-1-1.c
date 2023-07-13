#include<stdio.h>
void main ()
{
	FILE *fp,*sp;
	int a;
	fp=fopen("C:\\Users\\123\\Desktop\\Rudra read.text","r");
	fscanf(fp,"%d",&a);
	fclose(fp);
	printf("%d",a);
	sp=fopen("C:\\Users\\123\\Desktop\\Rudra write.text","w");
	fprintf(sp,"%d",a);
	fclose(fp);	 
}

