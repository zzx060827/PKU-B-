#include <stdio.h>

int result;

int isPrime(int a)
{
    if(a<2) return 0;
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}

void resolute(int a,int count,int where)
{
    if(a==1){result++;return;}
    if(where>a) return;
    if(isPrime(a)){result++;return;}
    for(int i=where;i<=a;i++)
    {
        if(a%i==0){resolute(a/i,count,i);}
    }

}

int main() 
{
    int n;scanf("%d",&n);   
    while(n--)
    {
        result=0;
        int a;scanf("%d",&a);
        int count=0;
        resolute(a,count,2);
        printf("%d\n",result);
    }
}