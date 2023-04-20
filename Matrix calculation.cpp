#include<stdio.h>
int main ()
{
	int m, n,p,q,i,j,c,k,add,s,insert; 
	again:
	printf("0 to exit\n");
	printf("1 for multiplication\n");
	printf("2 for Add/sub\n");
	printf("3 to print magic matrix\n");
	printf("4 for matrix transpose\n\n");
	printf("Enter choice: ");
	scanf("%d",&insert);
	printf("\n");
//	if (insert==4)
//	{
//      goto start;
//	}
	if(insert>4)
	{
		printf("\n\n***************** WRONG choice *****************\n\n");
		goto again;
	}
	if(insert==0)
	{
		return 0;
	}
	switch(insert)
	{
	case 1:
		{
		
	printf("Enter number of row & column of matrix 1:\n"); 
	scanf("%d %d", &m, &n);
	printf("Enter number of row & column of matrix 2:\n"); 
	scanf("%d %d", &p, &q);
	
	if (n==p)
	{
    int a[m][n];
			printf("\nEnter values for matrix 1:\n\n");
 for(i=0;i<m;i++)
	{
		printf("\tROW%d:\n",i+1);
		for(j=0;j<n;j++)
	 	{
	 		printf("\t\tCOLUMN%d:\n\t\t",j+1);
			scanf("\t\t%d",&a[i][j]);
    	}
    	printf("\n\n");
	}
	
	printf("Enter values for matrix 2:\n\n");
	int b[p][q];
	for(i=0;i<m;i++)
	{
		printf("\tROW%d:\n",i+1);
		for(j=0;j<n; j++)
	 	{
	 		printf("\t\tCOLUMN%d:\n\t\t",j+1);
			scanf("%d",&b[i][j]);
    	}
    	printf("\n");
	}
	
int mul[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	 	{
			c=0;
    		for(k=0;k<m;k++)
    		{
				c= c+a[i][k]*b[k][j];
				mul[i][j]=c;
			}
    	}
    	printf("\n");
	}
		printf("Multiplication is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n; j++)
	 	{
			printf("%d  ",mul[i][j]);
    	}
    	printf("\n");
	}
		printf("*******************************");
	break;
  }
  else
  {
  	printf("\n\t\tERROR: number of column of 1st matrix is not equal to number of row in 2nd matrix\n");
  		printf("*******************************\n");
  }
 }//1 end
		case 2:
			{
				printf("Enter row & column for 2 matrices :\n"); 
				scanf("%d %d", &m, &n);
				int a[m][n],b[m][n];
				printf("For martrix 1:\n\n"); 
				for(i=0;i<m;i++)
				{
					printf("\n\tROW%d:\n",i+1);
					for(j=0;j<n;j++)
					{
						printf("\t\tCOLUMN%d:\n\t\t",j+1);
						scanf("%d",&a[i][j]);
					}
				}
				printf("For martrix 2:\n\n"); 
				for(i=0;i<m;i++)
				{
					printf("\n\tROW%d:\n",i+1);
					for(j=0;j<n;j++)
					{
						printf("\t\tCOLUMN%d:\n\t\t",j+1);
						scanf("%d",&b[i][j]);
					}
				}
				
				printf("\n\nAddition is is:-\n\n");
				int sum[m][n],sub[m][n];
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						sum[i][j]=a[i][j]+b[i][j];
						printf("%d  ",sum[i][j]);
					}
						printf("\n");
				}
				
				printf("\n\nSubtraction is:-\n\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						sub[i][j]=a[i][j]-b[i][j];
						printf("%d  ",sub[i][j]);
					}
						printf("\n");
				}
						printf("*******************************\n\n");
				break;
			}//2 end
			
			case 3:
				{
					int num,a;
					printf("\nEnter row & column for magic matrix: \n"); 
				scanf("%d %d", &m, &n);
				printf("enter initial value of magic matrix: \n\n"); 
				scanf("%d",&num);
				
				for(i=1;i<=m;i++)
				{
					i>=a?i--:i;
					for(j=1;j<=n;j++)
					{
						printf("%d  ",num++);
					}
					a=i;
					printf("\n");
				}
				}
				
			case 4:
				{
					int m,n;
					printf("Enter row & column for matrix :\n"); 
			    	scanf("%d %d", &m, &n);
				int a[m][n];
				for(int i=0;i<m;i++)
				{
					printf("\n\tROW%d:\n",i+1);
					for(int j=0;j<n;j++)
					{
						printf("\t\tCOLUMN%d:\n\t\t",j+1);
						scanf("%d",&a[i][j]);
					}
				}
				
				printf("Before matrix-->\n");
				for(int i=0;i<m;i++)
				{
					
					for(int j=0;j<n;j++);
					{
						printf("%d ",a[i][j]);	
					}
					printf("\n");
				}
				}
		}//switch end
}
