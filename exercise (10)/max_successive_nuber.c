#include <stdio.h>

int main() 
{
    int n,max=0;scanf("%d",&n);
    int count=1;
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1]-1){count++;}
        else{
            if(count>max){max=count;}
            count=1;
        }
    }
    printf("%d",max);
}