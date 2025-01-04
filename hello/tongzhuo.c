#include <stdio.h>

int main() 
{
    int n;scanf("%d",&n);
    n*=2;int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int t=arr[i];
        if(arr[t]!=i){printf("no");}
        else if(arr[i]==i){printf("no");}
    }
}