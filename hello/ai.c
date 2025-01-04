#include <stdio.h>

int dx[4]={0,1,0,-1};
int dy[4]={-1,0,1,0};

int main(void) { 
    int n,m,k;scanf("%d%d%d",&n,&m,&k);
    char a[n][m];
    int x,y;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='c'){x=j;y=i;}
        }
    }
    for(int i=0;i<k;i++)
    {
        int go;
        scanf("%d",go);
        x+=dx[go];y+=dy[go];
        if(x<0||x>=m||y<0||y>=n)
        {
            printf("The cat escaped!\n");
            return 0;
        }
        else if(a[y][x]!='X')
        {
            printf("The cat moves to (%d,%d)\n",y+1,x+1);
        }
        else
        {
            printf("The cat can't moves to (%d,%d)\n",y+1,x+1);
            x-=dx[go];y-=dy[go];
        }
    }
    printf("The cat is too tired!\n");
}
