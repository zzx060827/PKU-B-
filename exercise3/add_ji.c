#include <stdio.h>

int main() 
{
    int n,m,sum=0;
    scanf("%d %d",&n,&m);
    if(n%2==0){n++;}
    for(int i=n;i<=m;i+=2)
    {sum+=i;}
    printf("%d",sum);
}