#include <stdio.h>
#include <math.h>

int main() 
{
    int n,k;int s=0;
    scanf("%d %d",&n,&k);int coin[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&coin[i]);
    }
    if(k==n)
    {
        for(int i=0;i<n;i++){s+=coin[i];}
        printf("%d",s);
        return 0;}
    int sum[k]; int max=0;
    for(int i=0;i<k;i++)
    {
        sum[i]=0;
        for(int j=0;j<i;j++)
        {
            sum[i]+=coin[j];
        }
        for(int j=n-1;j>n-k-1+i;j--)
        {
            sum[i]+=coin[j];
        }
        if(sum[i]>max)
        {
            max=sum[i];
        }
    }

    printf("%d",max);
}