#include <stdio.h>
#include <math.h>

int prime_detection(int n);

int main() 
{
    int m;scanf("%d",&m);
    for(int i=m-2;i>=2;i--)
    {
        if(prime_detection(i) && prime_detection(i+2))
        {printf("%d %d",i,i+2);return 0;}
    }
}

int prime_detection(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){return 0;}
    }
    return 1;
}