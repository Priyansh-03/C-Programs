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
		for(int j=i;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int loop=3;
	for(int i=0;i<loop;i++)
	{
		if(arr[i]==arr[i+1])
		{
			printf("%d, ",arr[i]);
			i++;
			loop++;
		}
		else
		{
			printf("%d, ",arr[i]);
		}
	}
}
