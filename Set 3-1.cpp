#include<stdio.h>
#include<string.h>

int main(){
  char str[100];
  gets(str);
  int n=strlen(str);
  int count=0;
  int arr[n],freq=0;
  for(int i=0;i<n;i++){
    arr[i]=0;
  }
  
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(str[i]==str[j]){
      	if(count>freq)
      	{
        count++;
        freq=count;
		}
      }
      else{
        arr[i]=count+1;
        count=0;
        break;
      }
    }
  }
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  int max=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  printf("\n");
  printf("%d",max);
}
