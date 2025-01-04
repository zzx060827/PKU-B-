#include <stdio.h>

int main() 
{
    int t,m,n,count=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        count=0;
        scanf("%d %d",&n,&m);
        int a[n];
        for(int j=0;j<n;j++)a[j]=0;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                int t;
                scanf("%d",&t);
                if(t==1){a[j]++;}
            }
        }
        int temp=m;
            if(temp%2!=0){temp++;temp/=2;}
            else{temp/=2;}
        for(int j=0;j<n;j++)
        {
            
            if(a[j]>=temp){count++;}
        }
        printf("%d\n",count);
    }
}