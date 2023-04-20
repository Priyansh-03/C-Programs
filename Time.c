														//TIME
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void main()
{
	int HH,MM,SS,k,h,m,s;
	double t;
		k=0;
	printf("Enter time format in HH:MM:SS:\n");
	scanf ("%d %d %d",&h,&m,&s);
		
	for (HH=h;HH<=12&&HH!=0;HH++)
	{
		for(MM=m;MM<60;MM++)
		{
			for(SS=s;SS<60;SS++)
			{
				printf("%d:%d:%d ",HH,MM,SS);
				if(k==0)
				{
					printf("PM\n\n");
			   	 if(HH==12&&MM==59&&SS==59)
				 {
					k=1;
					HH=0;
			     }
			    }
				else
				{
					printf("AM\n\n");
					if(HH==12&&MM==59&&SS==59)
				 {
					k=0;
					HH=0;		
			     }
				}
				for(t=1;t<100000000/2;t++)
				{
					t--;
					t++;
				}
			}
		}
	}
}
