#include <stdio.h>

long long coin(long long n,long long k,long long t)
{
    long long result=0;
    if(k==0)return 1;
    if(n==0)return 0;
    if(k==1&&n==1&&t!=0)return 1;
    if(t==-10)
    {
        for(long long i=1;i<=k;i++)
        {
            result+=coin(n,k,i);
        }
        result+=coin(n,k,0);
        return result;
    }
    else if(t==0)return coin(n-1,k,-10);
    else if(t==k)return coin(n-1,k,t-1)+coin(n-1,k-1,t-1);
    else if(t<k&&t>0)return coin(n-1,k,t-1);
}

long long main() 
{
    long long n,k;
    scanf("%lld%lld",&n,&k);
    printf("%lld",coin(n,k,-10));
}