#include <stdio.h>

int main() 
{
    int n,m;
    while(1)
    {
        scanf("%d %d",&n,&m);int a[n];int sum=0;
        if(n==0||m==0) return 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        int count=1,s=0,judge=0;
        while(1)
        {
            if(s==n){s=0;}
            while(a[s]==0){s++;if(s==n){s=0;}}
            if(a[s]!=0 && count==m){a[s]--;count=1;s++;}
            else if(a[s]!=0) {count++;s++;}
            judge=0;
            for(int j=0;j<n;j++)
            {
                if(a[j]!=0){judge++;}
            }
            if (judge==1){break;}
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0) printf("%d\n",i+1);
        }
    }
    
}