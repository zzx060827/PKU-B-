#include <stdio.h>

int main() 
{
    int n, m, t, k, count = 1   ;
    scanf("%d %d", &n, &m);
    t=m;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &k);
        m-=k;
        if(m<=0&&i!=n-1){count++;m=t;}
    }
    printf("%d", count);
}