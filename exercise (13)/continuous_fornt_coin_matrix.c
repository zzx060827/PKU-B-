#include <stdio.h>

long long coin(long long n,long long k,long long t,long long dp[n+1][k+1][k+1])
{
    if(t>=0&&t<=k&&dp[n][k][t]!=-1)return dp[n][k][t];
    long long result=0;
    if(k==0){dp[n][k][t]=1;return 1;}
    if(n==0){dp[n][k][t]=0;return 0;}
    if(k==1&&n==1&&t!=0){dp[n][k][t]=1;return 1;}
    if(t==-10)
    {
        for(long long i=1;i<=k;i++)
        {
            result+=coin(n,k,i,dp);
        }
        result+=coin(n,k,0,dp);
        dp[n][k][t]=result;
        return result;
    }
    else if(t==0){dp[n][k][t]=coin(n-1,k,-10,dp);return coin(n-1,k,-10,dp);}
    else if(t==k){dp[n][k][t]= coin(n-1,k,t-1,dp)+coin(n-1,k-1,t-1,dp);return  coin(n-1,k,t-1,dp)+coin(n-1,k-1,t-1,dp);}
    else if(t<k&&t>0){dp[n][k][t]=coin(n-1,k,t-1,dp);return coin(n-1,k,t-1,dp);}
}

long long main() 
{
    long long n,k;
    scanf("%lld%lld",&n,&k);
    long long dp[n+1][k+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            for(int t=0;t<=k;t++)
            {
                dp[i][j][t]=-1;
            }
        }
    }
    long long result=0;
        for(long long i=1;i<=k;i++)
            {
                result+=dp[n][k][i];
            }
            result+=dp[n][k][0];
    printf("%lld",result);
}