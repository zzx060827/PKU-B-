#include <stdio.h>
#include <math.h>

int is_square(int n);

int main() 
{
    int m,n;int count=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        int id = i;int judge=0;
        int t3 = id / 1000000;
        for(int j=2;j<=sqrt(t3);j++)
        {if(t3%j==0){judge=1;break;}}
        int l3 = id %1000;
        if(!is_square(l3)){judge=1;}
        int t=id;
        for(int j=0;j<8;j++)
        {
            if(t%100 == 13){judge=1;break;}
            t/=10;
        }
        if(judge==1)continue;
        count++;
        
    }
    printf("%d\n",count);
}

int is_square(int n)
{
    int root = sqrt(n);
    return (root*root == n);
}