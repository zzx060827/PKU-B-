#include <stdio.h>

int main() 
{
    int k,n,m,sum=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        sum=0;
        scanf("%d %d",&n,&m);
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
                if(i==0 || i==n-1 || j==0 || j==m-1)  
                {sum+=a[i][j];}
            }
        }
        printf("%d\n",sum);
    }
}