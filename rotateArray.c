#include <stdio.h>
#include<stdlib.h>
void rotateArray(int arr[],int n,int d);
void rotateArrayByOne(int arr[],int n)
{
   int i,temp;
   temp=arr[0];
   for(i=0;i<n-1;i++)
      arr[i]=arr[i+1];
   arr[i]=temp;
}
void rotateArray(int arr[],int n,int d)
{
    int i;
    for(i=0;i<d;i++)
        rotateArrayByOne(arr,n);
}
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main() {
	//code
	int *arr,t,n,d,i;
	scanf("%d",&t);
	do
	 {
	     scanf("%d %d",&n,&d);
	     arr=(int *)malloc(n*sizeof(int));
	     for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
	     rotateArray(arr,n,d);
	     printArray(arr,n);
	     t--;
	     printf("\n");
	 }while(t!=0);
	return 0;
}
