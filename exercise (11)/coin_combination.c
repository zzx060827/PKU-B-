#include <stdio.h>

int count=1;

void coin(int n,int a1,int b2,int c5)
{
    if(n==0)
    {
        printf("%03d%12d%12d%12d\n",count,a1,b2,c5);
        count++;
    }
    if(n>=1)
    {
        coin(n-1,a1+1,b2,c5);
    }
    if(n==0&&a1>=2)
    {
        coin(n,a1-2,b2+1,c5);
    }

}



int main() 
{
    int n;scanf("%d",&n);
    int a1=0,b2=0,c5=0;
    int t=n/5;
    for(int i=0;i<=t;i++)
    {
    coin(n,a1,b2,c5);
    c5++;
    n-=5;
    }
}