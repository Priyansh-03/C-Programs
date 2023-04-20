#include<stdio.h>
int main()
{
	int n,total,miss=0,arr_sum=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array--> ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	total=n*(n+1)/2;
	for(int i=0;i<n;i++)
	{
		arr_sum=arr_sum+arr[i];
	}
	miss=(total)-(arr_sum);
	printf("Missing number=%d",miss);
}
