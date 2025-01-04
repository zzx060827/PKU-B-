#include <stdio.h>

long long main() 
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long dp[n+1][k+1][k+1];
    for(int i=0;i<=n;i++)
    {
        dp[i][0][0]=1;
        if(i-k+1&&i!=0)
        {
            dp[0][i][0]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            
        }
    }
    printf("%lld",coin(n,k,-10));
}