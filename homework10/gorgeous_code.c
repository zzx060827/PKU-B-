#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
    for(int i=2;i<sqrt(num);i++)
    {
        if(num%i==0)return 0;
    }
    return 1;
}



int is_gorgeous(int num,int prime[]) 
{
    if(num<4){return 1;}
    for(int i=0;prime[i]<sqrt(num);i++)
    {
        if(num%prime[i]==0)return 0;
    }
    return 1;
}


int main() 
{
    int n;scanf("%d",&n);
    int count=0;int prime[1000000]={0};
    for(int i=1;i<=1000000;i++)
    {
        if(is_prime(i))
        {
            prime[count]=i;
            count++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        int nu;scanf("%d",&nu);
        if(is_gorgeous(nu,prime))
        {
            count++;
        }
        
    }
    printf("%d\n",count);
}