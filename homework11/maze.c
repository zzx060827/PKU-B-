#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char maze[105][105];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int visited[105][105] = {0};// 0: not visited, 1: visited
int n, m;
int min=10000000;

void dfs(int x, int y, int step) 
{
    if(maze[x][y]=='T')
    {
        if(step<min)min=step;
        return;
    }
    visited[x][y] = 1;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];int ny=y+dy[i];
        if(nx>=0 && nx<n && ny>=0 && ny<m &&(maze[nx][ny]=='.' || maze[nx][ny]=='T')&& !visited[nx][ny])
        {
            dfs(nx,ny,step+1);
        }
    }
}

int main() 
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf(" %c", &maze[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(maze[i][j]=='S')
            {
                visited[i][j]=1;
                dfs(i,j,0);
            }
        }
    }
    printf("%d",min);
}