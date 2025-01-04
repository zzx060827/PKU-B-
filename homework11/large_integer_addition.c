#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int n;scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        char a[401]={0};char b[401]={0};
        scanf("%s %s", a, b);
        int len_a = strlen(a);
        int len_b = strlen(b);
        int max_len = len_a > len_b? len_a : len_b;
        if(len_a > len_b)
        {
            for(int j=len_b-1;j>=0;j--)
        {
            b[j+max_len-len_b]=b[j];
            b[j]='0';            
        }
        for(int j=0;j<len_a-len_b;j++)
        {
            b[j]='0';
        }
        }
        else if(len_b>len_a)
        {
        for(int j=len_a-1;j>=0;j--)
        {
            a[j+max_len-len_a]=a[j];
            a[j]='0';            
        }
        for(int j=0;j<len_b-len_a;j++)
        {
            a[j]='0';
        }
        }
        int ai[401]={0};int bi[401]={0};
        for(int j=0;j<max_len;j++)
        {
            ai[j]=a[j]-'0';
            bi[j]=b[j]-'0';
        }
        int sum[401]={0};
        for(int j=max_len-1;j>=0;j--)
        {
            sum[j]+=ai[j]+bi[j];
            if(sum[j]>=10&&j!=0)
            {
                sum[j]-=10;
                sum[j-1]++;
            }
        }
        for(int j=0;j<max_len;j++)
        {
            printf("%d", sum[j]);
        }
        printf("\n");

    }
}