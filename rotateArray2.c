#include <stdio.h>
#include<stdlib.h>
void rotateArray(int arr[],int n,int d)
{
  int i;
  for(i=d;i<n;i++)
    printf("%d ",arr[i]);
  for(i=0;i<d;i++)
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
	 }while(t!=0);
	return 0;
}
