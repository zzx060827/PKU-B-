#include <stdio.h>

int main() 
{
    int a,b,n;scanf("%d %d",&a,&b);scanf("%d",&n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        int c;scanf("%d",&c);
        if(c>=a+b || c<=a-b || c<=b-a)
        {1;}
        else count++;
    }
    printf("%d",count);
}