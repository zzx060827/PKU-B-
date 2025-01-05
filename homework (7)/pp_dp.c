#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int wid[n], len[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &wid[i], &len[i]);
    }
    int dp[n];
    for (int i = 0; i < n; i++) {
        dp[i] = 1; 
    }

    int max = 1; // 初始化最大嵌套数量

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(wid[j] < wid[i] && len[j] < len[i])
            {
                int temp1=wid[i],temp2=len[i];
                wid[i]=wid[j],len[i]=len[j];
                wid[j]=temp1,len[j]=temp2;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(wid[j] < wid[i] && len[j] < len[i])
            {
                dp[i]=dp[i]>dp[j]+1?dp[i]:dp[j]+1;
            }
        }
        if(dp[i]>max)
        {
            max=dp[i];
        }
    }
    printf("%d\n", max);
    return 0;
}
