#include <stdio.h>
#include <math.h>

int main() 
{
    int n,a;long long sum=0;
    scanf("%d %d",&n,&a);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum+=a*pow(10,j-1);
        }
    }
    printf("%lld",sum);
}