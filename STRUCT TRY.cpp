#include<stdio.h>
#include<string.h>

typedef struct employee
{
	int id;
	float salary;
	char name[1000];
	float result;
	
}em;

void print(em emp1,em emp2,em emp3)
{
	printf("%d\n",emp1.id);
	printf("%0.3f\n",emp2.salary);
	printf("%s\n",emp3.name);
}
struct employee sum(struct employee num,struct employee sal)
{
	struct employee s;
	s.result=((float)num.id+sal.salary);
	return s;
}

int main()
{
	em ans;
	em e1,e2,e3;
	em *ptr1,*ptr2,*ptr3;
	ptr1= &e1;
	ptr2= &e2;
	ptr3= &e3;
	
	printf("Enter id: ");
	scanf("%d",&e1.id);
	printf("\nEnter salary: ");
	scanf("%f",&e2.salary);
	printf("\nEnter name: ");
	scanf("%s",e3.name);
	
	print(e1,e2,e3);
	
	printf("\nPOINTERS\n%d\n",ptr1->id);
	printf("%0.3f\n",	ptr2->salary);
	printf("%s\n",	ptr3->name);
	ans=sum(e1,e2);
	printf("\nsum= %0.3f",ans.result);
}
