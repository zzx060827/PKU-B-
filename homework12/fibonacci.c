#include <stdio.h>

long long fibonacci(int a,int b,int k,int l,int n)
{
    if(n==0){return k;}
    if(n==1){return l;}
    return a*fibonacci(a,b,k,l,n-1)+b*fibonacci(a,b,k,l,n-2);
}

int main() 
{
    int a,b,k,l,n;
    scanf("%d %d %d %d %d",&a,&b,&k,&l,&n);
    long long result = fibonacci(a,b,k,l,n);
    printf("%lld\n",result);
    for(int i=0;i<n;i++){printf("%lld ",fibonacci(a,b,k,l,i));}
}