#include<stdio.h>
int main()
{
	int n,temp,count=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array--> ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n-i-1;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				count++;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	printf("\n%d",count);
}
