#include <stdio.h>

int main() 
{
    int n,x;int arr[10]={0};
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++)
    {
        int figure=1;if(i>=10)figure++;
        if(i>=100)figure++;
        if(i>=1000)figure++;
        int t=i;
        for(int j=0;j<figure;j++)
        {
            arr[t%10]++;
            t/=10;
        }
    }
    printf("%d",arr[x]);
}