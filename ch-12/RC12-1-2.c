#include<stdio.h>
#include<string.h>
struct st{
	 int id;
	 char name[10];
	 int age;
	 char role[10];
	 char city[10];
	 int experience;
	 char companyname[10];
	
};
void main(){
	int n;
	printf("Enter value of n");
	scanf("%d",&n);
	struct st a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d/%d\n",i+1,n);
		printf("enter id ");
		scanf("%d",&a[i].id);
		printf("enter name ");
		scanf("%s",&a[i].name);
		printf("enter age ");
		scanf("%d",&a[i].age);
		printf("enter role ");
		scanf("%s",&a[i].role);
		printf("enter city ");
		scanf("%s",&a[i].city);
		printf("enter experience ");
		scanf("%d",&a[i].experience);
		printf("enter companyname ");
		scanf("%s",&a[i].companyname);
	}
	printf("id\tname\tage\tcourse\tcity\tstandard\t\t school\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\t \n",a[i].id,a[i].name,a[i].age,a[i].role,a[i].city,a[i].experience,a[i].companyname);
	}
}
