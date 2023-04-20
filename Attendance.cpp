#include<stdio.h>
int main()
{
	int lecture,absent,delegation;
	float attendance=0,a,b,c,d;
	
	printf("Enter number of total lectures: ");
	scanf("%d",&lecture);
		printf("Enter number of total absents: ");
	scanf("%d",&absent);
		printf("Enter number of total delegations: ");
	scanf("%d",&delegation);
	a=absent-delegation;
	b=a/lecture;
	c=b*100;
	d=100-c;
	attendance=d;
	printf("Your total Attendance is: %0.2f%c",attendance,37);
	return 0;
}
