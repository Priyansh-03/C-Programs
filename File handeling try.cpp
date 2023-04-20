#include<stdio.h>
int main()
{
	int i;
	FILE *file1,*file2;
	file1 = fopen("D:\\Programs Dev c++\\a.txt","r");
	file2 = fopen("D:\\Programs Dev c++\\b.txt","w");
	 
	char input=fgetc(file1);
	while (input!=EOF)
	{
   	 fputc(input,file2);
	 fputc(input,file2);
	 input=fgetc(file1);
	}
	 fclose(file1);
	 fclose(file2);
	 printf("successfully generated to D:\\Programs Dev c++\\b.txt");
	 return 0;
}
