#include <stdio.h>
#include <math.h>

long long decimal(int n, int k)
{
    int t=n;int i=0;
    long long result = 0;
    while(t>0)
    {
        if(t%10>=k)return -1;
        result+=(t%10)*pow(k,i);
        t/=10;
        i++;
    }
    return result;
}

int main() 
{
    int t;scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int p,q,r;
        scanf("%d%d%d",&p,&q,&r);
        for(int j=2;j<17;j++)
        {
            if(decimal(p,j)*decimal(q,j)==decimal(r,j) && decimal(p,j)!=-1 && decimal(q,j)!=-1)
            {
                printf("%d\n",j);
                break;
            }
            if(j==16){printf("0\n");}
        }
    }
}