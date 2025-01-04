#include <stdio.h>
#include <math.h>

int main() 
{
    int n;scanf("%d",&n);
    int count=0;int prime[1000000]={0};
    for(int i=1;i<=n;i++)
    {
        int nu;scanf("%d",&nu);
        while(nu%2==0)
        {nu/=2;}
        while(nu%3==0)
        {nu/=3;}
        while(nu%5==0)
        {nu/=5;}
        if(nu==1)
        {
            count++;
        }
        
    }
    printf("%d\n",count);
}