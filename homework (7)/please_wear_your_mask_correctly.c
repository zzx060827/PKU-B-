#include <stdio.h>

#define MAXN 101

void infect(int n,int old[MAXN][MAXN],int new[MAXN][MAXN])
{
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(old[i][j]==2)//if the current people if infected without mask
            {
                for(int t=0;t<4;t++)
                {
                int nx=i+dx[t];
                int ny=j+dy[t];
                if(nx>=0 && nx<n && ny>=0 && ny<n)
                {
                    if(new[nx][ny]==0)
                    {new[nx][ny]+=2;}
                    else if(new[nx][ny]==1)
                    {
                        if(old[nx+1][ny]==2&&old[nx-1][ny]==2&&old[nx][ny+1]==2&&old[nx][ny-1]==2)
                        {
                            new[nx][ny]+=2;
                        }
                    }
                }
            }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            old[i][j]=new[i][j];
            printf("%d ",old[i][j]);
        }
        printf("\n");
    }  
    printf("\n");
}

int main() 
{
    int n;scanf("%d",&n);
    int old[MAXN][MAXN],new[MAXN][MAXN];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&old[i][j]);
            new[i][j]=old[i][j];
        }
    }
     
    int x,y;
    scanf("%d %d",&x,&y);
    old[x][y]+=2;new[x][y]+=2;
    int day;
    scanf("%d",&day);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",old[i][j]);
        }
        printf("\n");
    } 
    for(int i=0;i<day;i++)
    infect(n,old,new);
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(new[i][j]>=2){count++;}
        }

    }
    printf("%d",count);
}