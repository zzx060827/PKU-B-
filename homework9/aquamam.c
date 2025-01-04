#include <stdio.h>
#include <math.h>

int main() 
{
    int m;scanf("%d",&m);
    for(long long i=pow(2,m+1);i>=pow(2,m);i-=2)
    {
        long long temp=i;
        for(int j=1;j<m;j++)
        {
            if(temp%2!=0){continue;}
            temp=(temp/2)-1;
        }
        if(temp==1){printf("%lld",i);return 0;}
    }
}