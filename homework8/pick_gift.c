#include <stdio.h>

int main() 
{
    int n;scanf("%d",&n);
    int a[n];int h;scanf("%d",&h);int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=h){count++;}
    }
    printf("%d",count);
    

}