#include <stdio.h>

int main() 
{
    long long n,v,m,a;
    scanf("%lld %lld %lld %lld",&n,&v,&m,&a);
    long long count=1;long long sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=v;
        count++;
        if(count>m)
        {
            v+=a;
            count=1;
        }
    }
    printf("%lld",sum);
}