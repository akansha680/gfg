#include<stdio.h>
#include<stdlib.h>
int balanceArray(int arr[],int n)
{
    int sum1=0,sum2=0,mid,mainSum=0,i;
    mid=n/2;
    for(i=0;i<mid;i++)
        sum1=sum1+arr[i];
    for(i=mid;i<n;i++)
        sum2=sum2+arr[i];
    mainSum=abs(sum2-sum1);
    return mainSum;
}
int main()
{
    int t,n,*arr,i,result;
    scanf("%d",&t);
    do
    {
        scanf("%d",&n);
        arr=(int *)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        result=balanceArray(arr,n);
        printf("%d\n",result);
        t--;
    }while(t!=0);
}
