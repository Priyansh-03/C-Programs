														//ALL PATTERNS
#include <stdio.h>
int combi(int n, int r)
{
	return (fact(n)/fact(n-r)/fact (r));
	}


	int pascaltri(int row)
	{
		int i,j,k,r;
    	
    	for(i=1;i<=row;i++)
    	{
    		k=1;
    		r=0;
        	for(j=1;j<=2*row-1;j++)
    		{
         	 if(j>=(row+1)-i&&j<=(row-1)+i&&k)
    		    {
    		   printf("%3d",combi(i-1,r));
    		   k=0;	r++;
    		}
    	   	 else
    		{
    			printf("   ");
    			k=1;
    		}
    	}
    		printf("\n");
    		
    }
    printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    printf("\n");
}


int main()
{


int i,j,k,r,row;
    	
    	for(i=1;i<=row;i++)
    	{
    		k=1;
    		r=0;
        	for(j=1;j<=2*row-1;j++)
    		{
         	 if(j>=(row+1)-i&&j<=(row-1)+i&&k)
    		    {
    		   printf("%3d",combi(i-1,r));
    		   k=0;	r++;
    		}
    	   	 else
    		{
    			printf("   ");
    			k=1;
    		}
    	}
    		printf("\n");
    		
    }
    printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    printf("\n");
}