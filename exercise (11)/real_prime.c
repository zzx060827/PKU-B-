#include <stdio.h>
#include <math.h>

int is_prime(int num) 
{
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int m,n,re;int reverse[10]={0};
    scanf("%d %d", &m, &n);int judge=1;
    for(int i = m; i <= n; i++)
    {
        if(is_prime(i))
        {
            re=0;
            int t=i;int count=0;
            for(int j=0;t!=0;j++)
            {
                reverse[count]=t%10;
                t=t/10;
                if(t!=0)count++;
            }
            for(int j=0;j<=count;j++)
            {
                re=re*10+reverse[j];
            }
            if(is_prime(re)&&judge==1)
            {
                printf("%d", i);judge=0;
            }
            else if(is_prime(re)&&judge!=1)
            {
                printf(",%d", i);
            }
            
        }
    }
    if(judge==1)printf("No");
}