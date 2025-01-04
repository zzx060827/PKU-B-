#include <stdio.h>

void findPrimeFactor(int n,int pm[]){
    while(n%2==0)
    {
        pm[2]++;
        n/=2;
    }
    for(int i=3;i*i<=n;i+=2)
    {
        while(n%i==0)
        {
            pm[i]++;
            n/=i;
        }
    }
}

int main() 
{
    int x;scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        int n,count=1;
        scanf("%d",&n);
        int pm[32769]={0};
        findPrimeFactor(n,pm);
    }
}