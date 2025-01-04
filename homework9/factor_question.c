#include <stdio.h>

int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a;
    for(int i=1;i<m;i++)
    {
        if(n%i==0 && n%(m-i)==0){printf("%d",i);return 0;}
    }
    printf("-1");
}