#include <stdio.h>

int main() 
{
    int n;int arr[101]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;scanf("%d",&x);
        arr[x]++;
    }
    for(int i=1;i<101;i++)
    {
        if(arr[i]%2!=0){printf("%d ",i);break;}
    }
}