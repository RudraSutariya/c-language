#include<stdio.h>
#include<string.h>
struct st{
	 int id;
	 char name[10];
	 int age;
	 char course[10];
	 char city[10];
	 int standard;
	 char school[10];
	
};
void main(){
	struct st a[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d/%d\n",i+1,3);
		printf("enter id ");
		scanf("%d",&a[i].id);
		printf("enter name ");
		scanf("%s",&a[i].name);
		printf("enter age ");
		scanf("%d",&a[i].age);
		printf("enter course ");
		scanf("%s",&a[i].course);
		printf("enter city ");
		scanf("%s",&a[i].city);
		printf("enter standard ");
		scanf("%d",&a[i].standard);
		printf("enter school ");
		scanf("%s",&a[i].school);
	}
	printf("id\tname\tage\tcourse\tcity\tstandard\t\t school\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\t \n",a[i].id,a[i].name,a[i].age,a[i].course,a[i].city,a[i].standard,a[i].school);
	}
}


