#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int isPrime(int n)
{
    if (n <= 1) return 0;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}

void primeFactorization(int origin,int n,int *result,int where) 
{
    if(isPrime(n))
    {
        int count = 0;
        while(result[count]!=0)
        {
            if(!count)
            printf("%d=%d",origin,result[count]);
            else
            printf("*%d",result[count]);
            count++;
        }
        printf("*%d",n);
        exit(0);
    }
    if(n%2==0){
        result[where++]=2;
        primeFactorization(origin,n/2,result,where);
        }
    for(int i=3; i*i<=n; i+=2)
    {
        if(isPrime(i)&&n%i==0)
        {
            result[where++]=i;
            primeFactorization(origin,n/i,result,where);
        }
    }
}

int main() 
{
    int n;scanf("%d", &n);
    if(isPrime(n)){printf("%d=%d",n,n);exit(0);}
    int result[200]={0};
    primeFactorization(n,n,result,0);
}