#include <stdio.h>

int main() 
{
    int n,t;
    scanf("%d %d",&n,&t);
    long long dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=0;
        }
    }
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=1;
        dp[i][i]=1;
    }
    for(int i=1,j=i+1;i<=n;j++)
    {
        if(j>n)
        {
            i++;
            j=i+1;
        }
        dp[i][j]=0;
    }
    for(int i=2,j=1;i<=n;j++)
    {
        if(j==i)
        {
            i++;
            j=1;
        }
        for(int k=i-j-1;k<=i-1;k++)
        {
            dp[i][j]+=dp[k][j];
        }
        for(int k=0;k<=j-1;k++)
        {
            dp[i][j]+=dp[i-j-1][k];
        }
    }
    printf("%lld",dp[n][t]);

}