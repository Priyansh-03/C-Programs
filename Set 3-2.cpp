#include<stdio.h>
int main()
{
	int n,temp;
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
		for(int j=0;j<n;j++)
		{
			if(arr[j]==0)
			{
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			}
		}
	
	} 
	for(int i=0;i<n;i++)
	{
	printf("%d",arr[i]);
	}
}
