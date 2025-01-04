#include <stdio.h>
#include <stdlib.h>

int n,m;

int main() 
{
    int k;
    scanf("%d%d%d",&n,&m,&k);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j]=0;
        }
    }
    for(int i=0;i<k;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        x--;y--;
        int dx[8]= {-1,-1,-1,0,0,1,1,1};
        int dy[8]= {-1,0,1,-1,1,-1,0,1};
        for(int i=0;i<8;i++)
        {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=0 && nx<n && ny>=0 && ny<m )
        {
            a[nx][ny]++;
        }

        }
        a[x][y]++;

    }
        
    int max=0,count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]>max)
            {max=a[i][j];count=1;}
            else if(a[i][j]==max)
            {count++;}
        }
    }
    printf("%d %d\n",max,count);

}