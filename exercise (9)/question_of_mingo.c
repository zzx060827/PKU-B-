#include <stdio.h>
#include <math.h>

int main() 
{
    int m,k,l,M,t;
    scanf("%d %d",&m,&k);
    l=(k-1)/m;
    t=(log(l)/log(m))+1;
    M=pow(m,t)+l;
    printf("%d",M);
    return 0;
}