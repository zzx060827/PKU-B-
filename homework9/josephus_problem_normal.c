#include <stdio.h>

int josephus(int n, int k) ;

int main() 
{
    int n,k;scanf("%d %d",&n,&k);
    printf("%d\n",josephus(n,k));
    return 0;
}

int josephus(int n, int k) 
{
    if(n==1){return 1;}
    int t = (josephus(n-1,k)+k)%n;
    if (t==0)return n;
    else {return t;}
    
}