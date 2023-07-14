#include<stdio.h>
#include<string.h>
struct st{
	 int roll_no;
	 char name[10];
	 int chem;
	 int maths;
	 int physic;
	 float percentage;
	
};
void main(){
	FILE *marks;
	int i;
	marks=fopen("marks.text","w");
	struct st a[5];
	for(i=0;i<5;i++)
	{
		printf("Enter details of Student %d\n",i+1);
		printf("enter roll_no ");
		scanf("%d",&a[i].roll_no);
		printf("enter name ");
		scanf("%s",&a[i].name);
		printf("enter chemistry marks ");
		scanf("%d",&a[i].chem);
		printf("enter physic marks ");
		scanf("%d",&a[i].physic);
		printf("enter maths marks ");
		scanf("%d",&a[i].maths);
		a[i].percentage=(a[i].chem+a[i].maths+a[i].physic)/3;
	}
	fprintf(marks,"Roll no\tname\tchemistry\tphysic\tmaths\tpercentage\n");
	for(i=0;i<5;i++)
	{
		fprintf(marks,"%d\t%s\t%d\t\t%d\t%d\t%f\t \n",a[i].roll_no,a[i].name,a[i].chem,a[i].physic,a[i].maths,a[i].percentage);
	}
	fclose(marks);
}
