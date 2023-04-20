                                            // DEVIL'S CALCULATOR
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int);
int combi(int,int);
int pascaltri(int);
void swap(int,int);
 
int main ()
{
  int choice, rev = 0, i, rem, a, b, c, n, enter, orignalnum, arm = 0;
  char e[5];

  printf("\t\t\t\t\tWELCOME TO DEVIL's CALCULATOR:D\n\n\t\t\t\t\tDO YOU WANT TO USE DEVIL's CALCULATOR?\n\t\t\t\t\t(yes/no): ");
  scanf("%c%c%c",&e[0],&e[1],&e[2]);
  if (e[0]=='y'&&e[1]=='e'&&e[2]=='s')
    {

     start:			//PROGRAM WILL START FROM HERE AFTER EVERY CASE
      printf ("\n\n\nEnter 1 for add.,sub.,multi.,div.,modulus,hcf,lcm,temprature conversion.\n");
      printf ("Enter 2 for factorial\n");
      printf ("Enter 3 for reversing digits\n");
      printf ("Enter 4 to check for palindrome number\n");
      printf ("Enter 5 to check for Armrstrong number\n");
      printf ("Enter 6 for fibonacci series\n");
      printf("Enter 7 to print all patterns\n");
      printf("Enter 8 for matrix calculation\n");
      printf("Enter 9 to check leap year\n");//lab 4
      printf("Enter 10 to print week day\n");
      //printf ("Enter 100 to Start clock from user's given time\n");
      printf ("Enter 0 to Exit DEVIL'S CALCULATOR\n\n");
      printf ("Enter choice: ");
      scanf ("%d", &choice);

      if (choice <= 10)
	{
	  switch (choice)
	    {

	    case 1:
	      {
		printf ("Enter numbers: ");
		scanf ("%d %d", &a, &b);
		printf ("Addition is %d\n", a + b);
		printf ("subtraction is %d\n", a - b);
		printf ("multiplication is %d\n", a * b);
		printf ("division is %d\n", a / b);
		printf ("modulus is %d\n", a % b);
		//swaping using function
		 swap(a,b);
		 printf("\n");
		//HCF
		int i, num1=a, num2=b, min, hcf=1;

    min = (num1<num2) ? num1 : num2;

    for(i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
		//LCM
		int x=a, y=b, res;
  res = (x > y) ? x : y;

  while (1) 
  {
      if (res % x == 0 && res % y == 0) 
	  {
          printf("The LCM obtained from %d and %d is %d.\n", x, y, res);
          break;
      }
      ++res;
  }
  	//Temprature conversion
  	
  	float f;
	float c;
	printf("\nEnter Temprature in Farenhite to convert to celcius: ");
    scanf("%f",&f);
    
    c= (f-32)/1.8;
    printf("C=%0.2f\n",c);
    
			printf("\n*******************************");
		goto start;
	      }			//case 1 end

	    case 2:
	      {
		printf ("Enter number: ");
		scanf ("%d", &a);
		printf("The factorial is %d\n",fact(a));
		printf("*******************************");
		goto start;
	      }			//case 2 end

	    case 3:
	      {
		printf ("Enter the number: ");
		scanf ("%d", &a);
		while (a != 0)
		  {
		    rem = a % 10;
		    rev = (rev * 10) + rem;
		    a = a / 10;
		  }
		printf ("The reversed number is %d\n***********\n", rev);
		goto start;
	      }			//case 3 end

	    case 4:
	      {
		printf ("Enter number: ");
		scanf ("%d", &a);
		while (a != 0)
		  {
		    rem = a % 10;
		    rev = (rev * 10) + rem;
		    a = a / 10;
		  }
		if (rev == a)
		  {
		    printf ("yes it a Palindrome\n***********\n");
		  }
		else
		  {
		    printf ("No it is NOT a Palindrome\n***********\n");
		  }
		goto start;
	      }			//case 4 end 

	    case 5:
	      {
		printf ("Enter number: ");
		scanf ("%d", &a);
		b = a;		//here b is the orignal num
		while (a > 0)
		  {
		    rem = a % 10;
		    arm = (rem * rem * rem) + arm;
		    a = a / 10;
		  }
		if (b == arm)
		  {
		    printf ("yes it is an armstrong number\n***********\n");
		  }
		else
		  {
		    printf ("no it is not an armstrong number\n***********\n");
		  }
		goto start;
	      }			//case 5 end

	    case 6:
	      {
		i = 1, a = 0, b = 1;
		printf ("Enter number till which series has to be printed: ");
		scanf ("%d", &n);

		while (i <= n)
		  {
		    c = a + b;
		    printf (" %d", c);
		    a = b;
		    b = c;
		    i++;
		  }
		  printf("\n***********\n");
		goto start;
	      }
        
        case 7:
        	{
        		//patterns
int r,i,j,k,row,n,skip;/*j=col:i=row*/
    char c;
    	
    printf("number of rows: ");
    scanf("%d",&row);
    printf("\n");
printf("FOR 1st PATTERN\n"); 

for (i=1;i<=row;i++)
{
  for (j=1;j<=i;j++)
      {
      	printf("*");
      	}
   	printf("\n");    	
      }
      printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    
printf("FOR 2nd PATTERN\n");


    for(i=1;i<=row;i++)
    	{
        	for(j=1;j<=row;j++)
    		{
    		    if(j>=row-i)
    		    {
    		   printf("*");	
          	}
        	else
    	     {
    	   		printf(" ");
    	     }
    		}
    	printf("\n");
    		
    	}
printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 3rd PATTERN\n");
    	
    	 for(i=1;i<=row;i++)
    	{
        	for(j=1;j<=row;j++)
    		{
    		    if(j>=i)
    		    {
    		   printf("*");
    			
    	}
    	else
    	{
    			printf(" ");
    	}
    		}
    		printf("\n");
    		
    	}
   printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 4th PATTERN\n");
    	
    	for(i=1;i<=row;i++)
    	{
        	for(j=1;j<=row;j++)
    		{
    		    if(j<=row-i)
    		    {
    		   printf("*");
    			
    	}
    	else
    	{
    			printf(" ");
    	}
    		}
    		printf("\n");
    		
    	}
      
printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 5th PATTERN\n");
    	
    	for(i=1;i<=row;i++)
    	{
        	for(j=1;j<=row+4;j++)
    		{
    		    if(j>=row-i&&j<=row+i)
    		    {
    		   printf("*");
    			
    	}
    	else
    	{
    			printf(" ");
    	}
    		}
    		printf("\n");
    		
    	}
      
printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 6th PATTERN\n");
    	
    	for(i=1;i<=row;i++)
    	{
    		k=1;
        	for(j=1;j<=row+4;j++)
    		
    		{
    		    if(j>=row-i&&j<=4+i&&k)
    		    {
    		   printf("*");
    		   k=0;
    			
    	}
    	else
    	{
    			printf(" ");
    			k=1;
    	}
    		}
    		printf("\n");
    		
    	}

printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 7th PATTERN\n");
    	
    	for(i=1;i<=row;i++)
    	{
        	for(j=1;j<=row+4;j++)
    		
    		{
    		    if(j<=row-i || j>=4+i)
    		    {
    		   printf("*");    			
    	}
    	else
    	{
    			printf(" ");
    	}
    		}
    		printf("\n");
    		
    	}
    	
    	printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 8th PATTERN\n");
    	
   for(i=0;i<=row;i++)
   {
     /* print blank spaces */
     for(j=1;j<=row-i;j++)
	printf(" ");
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       printf("%d",j);
 
     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	  printf("%d",j);
 
     printf("\n");
   }
    	
printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 9th PATTERN\n");
    	
    	 	for(i=1;i<=row;i++)
    	{
    		c='A';
        	for(j=1;j<=row+4;j++)
    		
    		{
    		    if(j<=row-1 || j>=row+1)
    		    {
    		   printf("%c",c);  
    		   j<row-1?c++:c--;  			
    	}
    	else
    	{
    			printf(" ");
    	}
    		}
    		printf("\n");
    		
    	}
  
printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 10th PATTERN\n");
    	k=0;
      n=(row+1)/2;
      
    	for(i=1;i<=row;i++)
    	{
         if(row%2==0)
         {
             if(i<=n)
             {
                 k++;
             }
             if(i>n+1)
             {
                 k--;
             }
             
             }
        else
        {
    		i<=n?k++:k--;
        }
    for(j=1;j<=row;j++)
    		{
    			if(j>=n+1-k&&j<=n-1+k)
    			{
    			printf("*");
    			}
    		else
        {
	       printf(" ");
	       }
       }
      printf("\n");
 }

printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 11th PATTERN\n");
    	k=0;
      n=(row+1)/2;
      
    	for(i=1;i<=row;i++)
    	{
         if(row%2==0)
         {
             if(i<=n)
             {
                 k++;
             }
             if(i>n+1)
             {
                 k--;
             }
             
             }
        else
        {
    		i<=n?k++:k--;
        }
    for(j=1;j<=n;j++)
    		{
    			if(j>=n+1-k&&j<=n-1+k)
    			{
    			printf("*");
    			}
    		else
        {
	       printf(" ");
	       }
       }
      printf("\n");
 }

printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 12th PATTERN\n");
    	k=0;
      n=(row+1)/2;
      
    	for(i=1;i<=row;i++)
    	{
         if(row%2==0)
         {
             if(i<=n)
             {
                 k++;
             }
             if(i>n+1)
             {
                 k--;
             }
             
             }
        else
        {
    		i<=n?k++:k--;
        }
    for(j=1;j<=n;j++)
    		{
    			if(j>=1&&j<=k)
    			{
    			printf("*");
    			}
    		else
        {
	       printf(" ");
	       }
       }
      printf("\n");
 }

printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
    	printf("FOR 13th PATTERN\n");
      
    	for(i=1;i<=row;i++)
        {
    for(j=1;j<=(2*row)-1;j++)
    		{
    			if(j>=i&&j<=(2*row)-i)
    			{
    			printf("*");
    			}
    		else
        {
	       printf(" ");
	       }
       }
      printf("\n");
 }

printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
    	
	printf("FOR 14th PATTERN\n");
    	
for(i=1;i<=row;i++)
{
    k=i;
	for(j=1;j<=2*row-1;j++)
		{
			if(j>=(row+1)-i && j<=(row-1)+i)
				{ 
					printf("%3d",k);
							j<row?k++:k--;
					}
					else
					{
						printf("   ");
						}
     }
     printf("\n");
  }
printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");

         printf("FOR 15th PATTERN\nPascal's triangle\n");

pascaltri(row);
 
 printf("\n\nFOR 16th PATTERN\nHour Glass\n");
	n=(row+1)/2;
	skip=1;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=row;j++)
		{
			if((j>=i)&&(j<=(2*n-i))&&(skip==1))
			{
			printf("*");
			skip=0;
			}
			else
			{
			printf(" ");
			skip=1;
			}	
		}
		printf("\n");
	}
	k=1;
	for(i=n+1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			if(j>=(2*n-i)&&(j<=i)&&(skip==1))
			{
			again:
			printf("*");
			if(i==n+1&&row%2==0&&k==1)
			{
				k=0;
				printf("\n");
				goto again;
			}
			skip=0;
			}
			else
			{
			printf(" ");
			skip=1;
			}	
		}
		printf("\n");
	}
	printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
	
	//diagonal square
	printf("For 17th pattern\n");
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			if((j==1) || (j==i) || (j==(row-i+1)) || (j==row) || (i==1) || (i==row))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}	
		}
		printf("\n");
	}
		printf("\nXXXXXXXXENDXXXXXXXXXX\n\n");
	printf("*******************************");
        goto start;
     }     //case 7 end
 
		case 8:
			{
			int m,n,p,q,i,j,c,k,add,s,insert; 
	re_enter:
	printf("\n\n");
	printf("1 for multiplication\n");
	printf("2 for Add/sub\n");
	printf("3 to exit Matrix calculation\n\n");
	printf("Enter choice: ");
	scanf("%d",&insert);
	printf("\n");
	if (insert==3)
	{
		goto start;
	}
	if(insert>3)
	{
		printf("\n\n***************** WRONG choice *****************\n\n");
		goto re_enter;
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
						printf("*******************************");
				break;
			}//2 end
	}//matrix switch end		
	goto start;
	}//case 8 end
	
	case 9:
		{
			int year;
			printf("Enter Year: ");
    scanf("%d",&year);
 
   year=((year%4==0)&&(year%100!=0))||(year%400==0)?printf("YES\n"):printf("NO\n");
   						printf("*******************************");

   goto start;
		}//case 9 end

	case 10:
		{
		
		int d,m,y,x,a;
		printf("Enter Date/Month/year: ");
    scanf("%d %d %d",&d,&m,&y);
    x=((y)*365)+(m*30)+d;
    a=x%7;
    if ((m==2||m==4||m==6||m==8||m==10||m==12)&&(d>30))
    {
        printf("INVALID DATE");
    }
    else 
    {
        switch(a)
    {
        case 1:
        printf("TUESDAY");
        break;
        case 2:
        printf("WEDNESDAY");
        break;
        case 3:
        printf("THURSDAY");
        break;
        case 4:
        printf("FRIDAY");
        break;
        case 5:
        printf("SATURDAY");
        break;
        case 6:
        printf("SUNDAY");
        break;
        case 7:
        printf("MONDAY");
        break;
    }//weekday switch end
    }
    	printf("\n\n*******************************\n\n");
    
		goto start;	
		}//case 10 end
		
//		case 100:
//		
//	{
//		int HH,MM,SS,k,h,m,s;
//		double t;
//		k=0;
//		input:
//		printf("Enter time format in HH MM SS:\n");
//		scanf ("%d %d %d",&h,&m,&s);
//		
//		if(h>12||m>60||s>60)
//		{
//			printf("\n\t\tWrong Input: input should not exceed 12:60:60\n####################################\n\n");
//			goto input;
//		}
//		for (HH=h;HH<=12&&HH!=0;HH++)
//		{
//			for(MM=m;MM<60;MM++)
//			{
//				for(SS=s;SS<60;SS++)
//					{
//						 printf("\n%d:%d:%d ",HH,MM,SS);
//							if(k==0)
//							{
//								 printf("PM\n\n");
//			   					 if(HH==12&&MM==59&&SS==59)
//								{
//									k=1;
//									HH=0;
//									SS=0;
//			    				}
//			   				}
//							else
//							{
//								printf("AM\n\n");
//								 if(HH==12&&MM==59&&SS==59)
//				 				{
//									k=0;
//									HH=0;
//			    				}
//									SS=0;		
//							}
//						for(t=1;t<111111009;t++)
//						{
//						}
//					}
//			}
//		}
//	}//case 100 end

	    case 0:
	      {
		printf ("THANK YOU FOR USING DEVIL'S CALCULATOR:D\n***********\n");
		break;

	      }//case 10 end
	   }           //switch end
	}              //choice if end
      else			//choce 
	{
	  printf ("\n\t\tINVALID CHOICE\n***********\n");
	  goto start;
}
	}			//entry if end
    		
  	if (e[0]=='n'&&e[1]=='o')		//for entering and exiting
    {
      printf ("\n\nTHANK YOU!!\nHOPE TO SEE YOU AGAIN :D\n***********\n");
    }
 }
 
//FUNCTIONS:-

int fact(int n)
 {
     int f=1;
 	while(n>0)
 	{
 	f*=n;
 	n--;
 	}
return f;
}


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

void swap(int N1, int N2)
{
    int temp = N1;
    N1 = N2;
    N2 = temp;
	printf("Values after swapping are =%d , %d",N1,N2);
}
