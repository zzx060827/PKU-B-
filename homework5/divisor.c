#include <stdio.h>

int main() 
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;

        }
    }
    printf("%d",count);
    return 0;
}