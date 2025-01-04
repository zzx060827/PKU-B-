#include <stdio.h>

int main() 
{
    int n;
    while(1)
    {
        scanf("%d", &n);if(n==0) return 0;
        int a[500]={0};
        for(int i=0;i<n;i++)
        {
            int x;scanf("%d", &x);
            a[x]++;
        }
        int count=0;
        if(n%2==0){count=(n/2);}else{count=(n+1)/2;}
        for(int i=499;i>=0;i--)
        {
            if(a[i]>0){count-=a[i];if(count<=0){printf("%d\n", i);break;};}
        }
    }
}